#include <stdio.h>

struct Data
{
    char c;
    int i;
    float f;
};

union DataUnion
{
    char c;
    int i;
    float f;
};

int main()
{
    struct Data s;
    union DataUnion u;

    printf("Structure size = %zu\n", sizeof(s));
    printf("Union size = %zu\n", sizeof(u));

    printf("Enter a character: ");
    scanf(" %c", &s.c);

    printf("Enter an integer: ");
    scanf("%d", &s.i);

    printf("Enter a float: ");
    scanf("%f", &s.f);

    u.c = s.c;
    printf("Union character = %c\n", u.c);

    u.i = s.i;
    printf("Union integer = %d\n", u.i);

    u.f = s.f;
    printf("Union float = %.2f\n", u.f);

    return 0;
}
