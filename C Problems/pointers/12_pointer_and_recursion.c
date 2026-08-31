#include <stdio.h>

void reverse(char *start, char *end)
{
    char temp;

    if (start >= end)
        return;

    temp = *start;
    *start = *end;
    *end = temp;

    reverse(start + 1, end - 1);
}

int sum(int *p, int n)
{
    if (n == 0)
        return 0;

    return *p + sum(p + 1, n - 1);
}

int main()
{
    char str[100];
    int arr[50];
    int n, i;

    printf("Enter a string: ");
    scanf(" %99s", str);

    i = 0;

    while (str[i] != '\0')
        i++;

    reverse(str, str + i - 1);

    printf("Reversed string: %s\n", str);

    printf("Enter number of array elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d", sum(arr, n));

    return 0;
}
