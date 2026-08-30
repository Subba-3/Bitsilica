#include <stdio.h>

void my_copy(void *dest, void *src, int size)
{
    char *d = (char *)dest;
    char *s = (char *)src;
    int i;

    for (i = 0; i < size; i++)
        d[i] = s[i];
}

int main()
{
    int a[5], b[5];
    float x[3], y[3];
    int i;

    printf("Enter 5 integers:\n");

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    my_copy(b, a, sizeof(a));

    printf("Copied integers: ");

    for (i = 0; i < 5; i++)
        printf("%d ", b[i]);

    printf("\nEnter 3 floats:\n");

    for (i = 0; i < 3; i++)
        scanf("%f", &x[i]);

    my_copy(y, x, sizeof(x));

    printf("Copied floats: ");

    for (i = 0; i < 3; i++)
        printf("%.2f ", y[i]);

    return 0;
}
