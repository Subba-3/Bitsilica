#include <stdio.h>

union Data
{
    int i;
    float f;
    char text[20];
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

    printf("Enter text: ");
    scanf("%19s", data.text);
    printf("Text = %s\n", data.text);

    printf("Only the last assigned member should be treated as valid.\n");

    return 0;
}
