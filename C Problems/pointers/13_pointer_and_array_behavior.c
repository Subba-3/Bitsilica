#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i;

    printf("Enter 5 integers: ");

    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    printf("Array address = %p\n", (void *)arr);
    printf("Pointer address = %p\n", (void *)ptr);
    printf("Size of array = %zu\n", sizeof(arr));
    printf("Size of pointer = %zu\n", sizeof(ptr));

    printf("Using array: ");

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\nUsing pointer: ");

    for (i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
