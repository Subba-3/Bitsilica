#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int left, right;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    right = strlen(str) - 1;
    left = 0;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
