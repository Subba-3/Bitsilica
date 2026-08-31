#include <stdio.h>

#define ADD(a, b) ((a) + (b))

int main()
{
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", ADD(a, b));

    return 0;
}
