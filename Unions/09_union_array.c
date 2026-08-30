#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter integer for element %d: ", i + 1);
        scanf("%d", &data[i].i);
    }

    printf("Integer values:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", data[i].i);
    }

    printf("\n");

    return 0;
}
