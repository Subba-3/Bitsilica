#include <stdio.h>

union Data
{
    int i;
    double d;
    char c;
};

struct DataStruct
{
    int i;
    double d;
    char c;
};

int main()
{
    union Data data;
    struct DataStruct structure;

    printf("Union size = %zu\n", sizeof(data));
    printf("Structure size = %zu\n", sizeof(structure));

    return 0;
}
