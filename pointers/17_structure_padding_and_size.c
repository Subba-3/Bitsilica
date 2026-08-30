#include <stdio.h>
#include <stddef.h>

struct Data
{
    char a;
    int b;
    short c;
};

int main()
{
    struct Data data;

    printf("Size of structure = %zu\n", sizeof(data));
    printf("Address of a = %p\n", (void *)&data.a);
    printf("Address of b = %p\n", (void *)&data.b);
    printf("Address of c = %p", (void *)&data.c);

    return 0;
}
