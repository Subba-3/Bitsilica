#include <stdio.h>
#include <stddef.h>

struct Data
{
    char c;
    int i;
    short s;
};

int main()
{
    struct Data data;

    printf("Size of structure = %zu\n", sizeof(data));
    printf("Offset of c = %zu\n", offsetof(struct Data, c));
    printf("Offset of i = %zu\n", offsetof(struct Data, i));
    printf("Offset of s = %zu\n", offsetof(struct Data, s));

    return 0;
}
