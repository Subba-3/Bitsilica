#include <stdio.h>

int *get_data()
{
    static int arr[10];
    int i;

    for (i = 0; i < 10; i++)
        arr[i] = i + 1;

    return arr;
}

int main()
{
    int *p;
    int i;

    p = get_data();

    printf("Calibration data: ");

    for (i = 0; i < 10; i++)
        printf("%d ", *(p + i));

    return 0;
}
