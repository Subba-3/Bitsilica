#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while (str[i] == ' ')
        i++;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
        else if (j > 0 && result[j - 1] != ' ')
        {
            result[j] = ' ';
            j++;
        }

        i++;
    }

    if (j > 0 && result[j - 1] == ' ')
        j--;

    result[j] = '\0';

    printf("Output: %s", result);

    return 0;
}
