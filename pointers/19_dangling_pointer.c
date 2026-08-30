#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    *p = value;

    printf("Value = %d\n", *p);

    free(p);
    p = NULL;

    if (p == NULL)
        printf("Pointer is now NULL");

    return 0;
}
