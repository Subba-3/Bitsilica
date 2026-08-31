#include <stdio.h>

int main()
{
    int value;
    int *p;
    const int *cp;

    printf("Enter an integer: ");
    scanf("%d", &value);

    p = &value;
    cp = &value;

    printf("Value using normal pointer: %d\n", *p);
    printf("Value using const pointer: %d\n", *cp);

    *p = *p + 10;

    printf("After changing through pointer: %d", *p);

    return 0;
}
