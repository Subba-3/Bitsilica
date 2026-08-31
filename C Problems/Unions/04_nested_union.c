#include <stdio.h>

union Inner
{
    float f;
    char c;
};

union Number
{
    int i;
    union Inner inner;
};

int main()
{
    union Number number;

    printf("Enter integer: ");
    scanf("%d", &number.i);
    printf("Integer = %d\n", number.i);

    printf("Enter float: ");
    scanf("%f", &number.inner.f);
    printf("Float = %.2f\n", number.inner.f);

    printf("Enter character: ");
    scanf(" %c", &number.inner.c);
    printf("Character = %c\n", number.inner.c);

    return 0;
}
