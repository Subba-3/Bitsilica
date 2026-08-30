#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    int rows, cols;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    arr = (int **)malloc(rows * sizeof(int *));

    if (arr == NULL)
        return 0;

    for (i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));

        if (arr[i] == NULL)
            return 0;
    }

    printf("Enter values:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("Matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }

    for (i = 0; i < rows; i++)
        free(arr[i]);

    free(arr);

    return 0;
}
