#include <stdio.h>

void reverse(int *p, int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + n - 1 - i);
        *(p + n - 1 - i) = temp;
    }
}

int main()
{
    int arr[50];
    int n, i, sum = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = arr;

    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    for (i = 0; i < n; i++)
        sum = sum + *(p + i);

    printf("Sum = %d\n", sum);

    reverse(p, n);

    printf("Reversed array: ");

    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}
