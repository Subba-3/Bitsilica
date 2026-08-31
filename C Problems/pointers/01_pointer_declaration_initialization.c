#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1;
    float *p2;
    char *p3;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    p1 = &n;
    p2 = (float *)malloc(sizeof(float));
    p3 = (char *)malloc(sizeof(char));

    printf("Enter a float: ");
    scanf("%f", p2);

    printf("Enter a character: ");
    scanf(" %c", p3);

    printf("Integer = %d\n", *p1);
    printf("Float = %.2f\n", *p2);
    printf("Character = %c\n", *p3);

    printf("Address of integer = %p\n", (void *)p1);
    printf("Next integer address = %p\n", (void *)(p1 + 1));

    free(p2);
    free(p3);

    return 0;
}
