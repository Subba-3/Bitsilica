#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            return 0;

        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[200];
    int start = 0, end, i;
    int parts = 0;

    printf("Enter a string: ");
    scanf(" %199s", str);

    end = strlen(str) - 1;

    printf("Palindrome parts: ");

    while (start <= end)
    {
        for (i = end; i >= start; i--)
        {
            if (is_palindrome(str, start, i))
                break;
        }

        while (start <= i)
            printf("%c", str[start++]);

        parts++;

        if (start <= end)
            printf(" | ");
    }

    printf("\nNumber of parts: %d", parts);

    return 0;
}
