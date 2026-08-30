#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50];
    int i, j, found;
    int len1, len2;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter word to search: ");
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
            printf("First occurrence at index: %d", i);
            return 0;
        }
    }

    printf("Word not found");

    return 0;
}
