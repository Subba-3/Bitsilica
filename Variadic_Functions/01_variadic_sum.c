#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    int total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        total = total + va_arg(args, int);
    }

    va_end(args);

    return total;
}

int main()
{
    int count;
    int values[100];
    int total;

    printf("Enter number of integers: ");
    scanf("%d", &count);

    if (count <= 0 || count > 5)
    {
        printf("Invalid count\n");
        return 1;
    }

    printf("Enter integers:\n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &values[i]);
    }

    switch (count)
    {
        case 1:
            total = sum(1, values[0]);
            break;
        case 2:
            total = sum(2, values[0], values[1]);
            break;
        case 3:
            total = sum(3, values[0], values[1], values[2]);
            break;
        case 4:
            total = sum(4, values[0], values[1], values[2], values[3]);
            break;
        case 5:
            total = sum(5, values[0], values[1], values[2], values[3], values[4]);
            break;
        default:
            total = 0;
            break;
    }

    printf("Sum = %d\n", total);

    return 0;
}
