#include <stdio.h>

int main()
{
    char str[200];
    int start = 0, end = 0, i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[end] != '\0')
        end++;

    end--;

    while (str[start] == ' ')
        start++;

    while (end >= start && str[end] == ' ')
        end--;

    printf("Output: ");

    for (i = start; i <= end; i++)
        printf("%c", str[i]);

    return 0;
}
