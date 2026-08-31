#include <stdio.h>

int main()
{
    char str[200];
    int i, j, start, end;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    i = 0;
    while (str[i] != '\0')
        i++;

    end = i - 1;

    printf("Output: ");

    while (end >= 0)
    {
        while (end >= 0 && str[end] == ' ')
            end--;

        j = end;

        while (j >= 0 && str[j] != ' ')
            j--;

        start = j + 1;

        while (start <= end)
        {
            printf("%c", str[start]);
            start++;
        }

        if (j >= 0)
            printf(" ");

        end = j - 1;
    }

    return 0;
}
