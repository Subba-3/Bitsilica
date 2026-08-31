#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char str[], int start, int end)
{
    int i;

    if (start == end)
    {
        printf("%s\n", str);
        return;
    }

    for (i = start; i <= end; i++)
    {
        swap(&str[start], &str[i]);
        permutation(str, start + 1, end);
        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[20];

    printf("Enter a string: ");
    scanf(" %19s", str);

    permutation(str, 0, strlen(str) - 1);

    return 0;
}
