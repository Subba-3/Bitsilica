#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE];

    printf("Enter %d numbers:\n", SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array size is: %d\n", SIZE);

    return 0;
}
