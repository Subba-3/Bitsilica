#include <stdio.h>

struct Point
{
    int x;
    int y;
};

union Data
{
    struct Point point;
    int value;
};

int main()
{
    union Data data;

    printf("Enter x: ");
    scanf("%d", &data.point.x);

    printf("Enter y: ");
    scanf("%d", &data.point.y);

    printf("Point = (%d, %d)\n", data.point.x, data.point.y);

    printf("Enter integer value: ");
    scanf("%d", &data.value);

    printf("Value = %d\n", data.value);

    return 0;
}
