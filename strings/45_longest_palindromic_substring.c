#include <stdio.h>
#include <string.h>

void expand(char str[], int left, int right, int *best_start, int *best_len)
{
    while (left >= 0 && str[right] != '\0' &&
           str[left] == str[right])
    {
        if (right - left + 1 > *best_len)
        {
            *best_start = left;
            *best_len = right - left + 1;
        }

        left--;
        right++;
    }
}

int main()
{
    char str[200];
    int i, start = 0, max_len = 1;

    printf("Enter a string: ");
    scanf(" %199s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        expand(str, i, i, &start, &max_len);
        expand(str, i, i + 1, &start, &max_len);
    }

    printf("Longest palindromic substring: ");

    for (i = start; i < start + max_len; i++)
        printf("%c", str[i]);

    return 0;
}
