#include <stdio.h>
#include <string.h>

/*
   Basic rolling-hash idea:
   calculate a small hash for the pattern and each text window.
   When hashes match, compare the characters to confirm the match.
*/

int main()
{
    char text[300], pattern[100];
    int i, j;
    int text_len, pattern_len;
    int pattern_hash = 0, window_hash = 0;
    int found;

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    printf("Enter pattern: ");
    scanf(" %99s", pattern);

    text_len = strlen(text);
    pattern_len = strlen(pattern);

    if (pattern_len > text_len)
    {
        printf("Pattern not found");
        return 0;
    }

    for (i = 0; i < pattern_len; i++)
    {
        pattern_hash += pattern[i];
        window_hash += text[i];
    }

    for (i = 0; i <= text_len - pattern_len; i++)
    {
        if (pattern_hash == window_hash)
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

        if (i < text_len - pattern_len)
        {
            window_hash = window_hash - text[i] + text[i + pattern_len];
        }
    }

    return 0;
}
