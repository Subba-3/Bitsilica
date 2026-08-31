#include <stdio.h>
#include <string.h>

int main()
{
    char str[300], word[50], result[300];
    int i = 0, j, k = 0, found;
    int word_len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter word to remove: ");
    scanf(" %49s", word);

    word_len = strlen(word);

    while (str[i] != '\0')
    {
        found = 1;

        for (j = 0; j < word_len; j++)
        {
            if (str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
            i += word_len;
        else
        {
            result[k] = str[i];
            k++;
            i++;
        }
    }

    result[k] = '\0';

    printf("Output: %s", result);

    return 0;
}
