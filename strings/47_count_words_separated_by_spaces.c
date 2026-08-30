#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, count = 0, in_word = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && in_word == 0)
        {
            count++;
            in_word = 1;
        }
        else if (str[i] == ' ')
        {
            in_word = 0;
        }

        i++;
    }

    printf("Number of words: %d", count);

    return 0;
}
