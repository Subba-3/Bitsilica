#include <stdio.h>

union Sample
{
    int i;
    float f;
};

int main()
{
    union Sample sample;
    union Sample *ptr;

    ptr = &sample;

    printf("Enter integer: ");
    scanf("%d", &ptr->i);

    printf("Integer = %d\n", ptr->i);

    printf("Enter float: ");
    scanf("%f", &ptr->f);

    printf("Float = %.2f\n", ptr->f);

    return 0;
}
