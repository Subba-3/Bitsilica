#include <stdio.h>

int main()
{
    char str[200], temp;
    int start = 0, end = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[end] != '\0')
        end++;

    end--;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
