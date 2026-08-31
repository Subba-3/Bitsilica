#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data;

    printf("Enter integer: ");
    scanf("%d", &data.i);
    printf("Integer = %d\n", data.i);

    printf("Enter float: ");
    scanf("%f", &data.f);
    printf("Float = %.2f\n", data.f);

    printf("Enter character: ");
    scanf(" %c", &data.c);
    printf("Character = %c\n", data.c);

    printf("The currently assigned member is character.\n");

    return 0;
}
