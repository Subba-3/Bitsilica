#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i = 0, end, start, j = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0')
        i++;

    end = i - 1;

    while (end >= 0)
    {
        while (end >= 0 && str[end] == ' ')
            end--;

        start = end;

        while (start >= 0 && str[start] != ' ')
            start--;

        i = start + 1;

        while (i <= end)
            result[j++] = str[i++];

        if (start >= 0)
            result[j++] = ' ';

        end = start - 1;
    }

    result[j] = '\0';

    printf("Output: %s", result);

    return 0;
}
