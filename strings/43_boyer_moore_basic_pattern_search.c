#include <stdio.h>
#include <string.h>

/*
   Basic Boyer-Moore style bad-character shift.
   No advanced library search function is used.
*/

int main()
{
    char text[300], pattern[100];
    int last[256];
    int i, j, shift;
    int text_len, pattern_len;
    int found = 0;

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    printf("Enter pattern: ");
    scanf(" %99s", pattern);

    text_len = strlen(text);
    pattern_len = strlen(pattern);

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; i < pattern_len; i++)
        last[(unsigned char)pattern[i]] = i;

    i = pattern_len - 1;

    while (i < text_len)
    {
        j = pattern_len - 1;

        while (j >= 0 && pattern[j] == text[i - (pattern_len - 1 - j)])
            j--;

        if (j < 0)
        {
            printf("Pattern found at index %d\n", i - pattern_len + 1);
            found = 1;
            i++;
        }
        else
        {
            int bad_index = last[(unsigned char)text[i]];

            shift = j - bad_index;

            if (shift < 1)
                shift = 1;

            i += shift;
        }
    }

    if (!found)
        printf("Pattern not found");

    return 0;
}
