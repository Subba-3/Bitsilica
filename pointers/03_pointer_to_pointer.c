#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p;
    int *q;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    q = (int *)malloc(sizeof(int));
    p = &q;

    **p = n;

    printf("Value = %d\n", **p);
    printf("Value using q = %d", *q);

    free(q);

    return 0;
}
