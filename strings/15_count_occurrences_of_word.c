#include <stdio.h>
#include <string.h>

int main()
{
    char str[300], word[50];
    int i, j, count = 0, found;
    int len1, len2;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter word: ");
    scanf(" %49s", word);

    len1 = strlen(str);
    len2 = strlen(word);

    for (i = 0; i <= len1 - len2; i++)
    {
        found = 1;

        for (j = 0; j < len2; j++)
        {
            if (str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            count++;
            i += len2 - 1;
        }
    }

    printf("Occurrences: %d", count);

    return 0;
}
