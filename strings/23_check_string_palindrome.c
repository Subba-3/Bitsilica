#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, len, palindrome = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
