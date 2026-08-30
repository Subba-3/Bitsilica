#include <stdio.h>
#include <string.h>

int main()
{
    char text[300], pattern[100];
    int i, j, found;
    int text_len, pattern_len;

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    printf("Enter pattern: ");
    scanf(" %99s", pattern);

    text_len = strlen(text);
    pattern_len = strlen(pattern);

    for (i = 0; i <= text_len - pattern_len; i++)
    {
        found = 1;

        for (j = 0; j < pattern_len; j++)
        {
            if (text[i + j] != pattern[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
            printf("Pattern found at index %d\n", i);
    }

    return 0;
}
