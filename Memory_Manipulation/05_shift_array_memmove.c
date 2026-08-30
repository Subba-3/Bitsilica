#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10];
    int n;
    int shift;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to shift right: ");
    scanf("%d", &shift);

    if (shift > 0 && shift < n)
    {
        memmove(arr + shift, arr, (n - shift) * sizeof(int));

        printf("Array after shifting:\n");

        for (int i = 0; i < shift; i++)
        {
            printf("0 ");
        }

        for (int i = 0; i < n - shift; i++)
        {
            printf("%d ", arr[shift + i]);
        }

        printf("\n");
    }
    else
    {
        printf("Invalid shift\n");
    }

    return 0;
}
