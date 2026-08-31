#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5];

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
