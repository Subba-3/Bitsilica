#include <stdio.h>
#include <string.h>

int main()
{
    char str[300], word[50];
    int i, j, found, found_any = 0;
    int len1, len2;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter word: ");
    scanf(" %49s", word);

    len1 = strlen(str);
    len2 = strlen(word);

    printf("Positions: ");

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
            printf("%d ", i);
            found_any = 1;
        }
    }

    if (!found_any)
        printf("Word not found");

    return 0;
}
