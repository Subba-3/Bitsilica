#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int *temp;
    int n, new_n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    printf("Enter new size: ");
    scanf("%d", &new_n);

    temp = (int *)realloc(p, new_n * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed");
        free(p);
        return 0;
    }

    p = temp;

    if (new_n > n)
    {
        for (i = n; i < new_n; i++)
            scanf("%d", p + i);
    }

    printf("Array: ");

    for (i = 0; i < new_n; i++)
        printf("%d ", *(p + i));

    free(p);

    return 0;
}
