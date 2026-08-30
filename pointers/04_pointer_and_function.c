#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void change_array(int *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
        *(p + i) = *(p + i) * 2;
}

int main()
{
    int a, b;
    int arr[50];
    int n, i;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swap: %d %d\n", a, b);

    printf("Enter array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    change_array(arr, n);

    printf("Changed array: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
