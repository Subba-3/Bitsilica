#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols;
    int i, j;
    int *p;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    p = &arr[0][0];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", p + i * cols + j);
    }

    printf("Matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", *(p + i * cols + j));

        printf("\n");
    }

    return 0;
}
