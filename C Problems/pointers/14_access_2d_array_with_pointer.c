#include <stdio.h>

int main()
{
    int arr[3][3];
    int *p;
    int i, j;

    printf("Enter 9 values:\n");

    p = &arr[0][0];

    for (i = 0; i < 9; i++)
        scanf("%d", p + i);

    printf("Values using pointer:\n");

    for (i = 0; i < 9; i++)
        printf("%d ", *(p + i));

    return 0;
}
