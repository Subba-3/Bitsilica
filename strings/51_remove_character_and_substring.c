#include <stdio.h>
#include <string.h>

int main()
{
    char str[300], substring[100], result[300];
    char remove_char;
    int i = 0, j, k = 0, found;
    int sub_len;

    printf("Enter string: ");
    scanf(" %299[^\n]", str);

    printf("Enter character to remove: ");
    scanf(" %c", &remove_char);

    printf("Enter substring to remove: ");
    scanf(" %99s", substring);

    sub_len = strlen(substring);

    while (str[i] != '\0')
    {
        found = 1;

        for (j = 0; j < sub_len; j++)
        {
            if (str[i + j] != substring[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            i += sub_len;
        }
        else
        {
            if (str[i] != remove_char)
                result[k++] = str[i];

            i++;
        }
    }

    result[k] = '\0';

    printf("Output: %s", result);

    return 0;
}
