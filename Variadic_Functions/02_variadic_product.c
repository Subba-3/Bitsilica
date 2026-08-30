#include <stdio.h>
#include <stdarg.h>

int product(int count, ...)
{
    va_list args;
    int result = 1;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        result = result * va_arg(args, int);
    }

    va_end(args);

    return result;
}

int main()
{
    int count;
    int values[5];
    int result = 1;

    printf("Enter number of integers (1-5): ");
    scanf("%d", &count);

    if (count < 1 || count > 5)
    {
        printf("Invalid count\n");
        return 1;
    }

    printf("Enter integers:\n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &values[i]);
    }

    if (count == 1)
        result = product(1, values[0]);
    else if (count == 2)
        result = product(2, values[0], values[1]);
    else if (count == 3)
        result = product(3, values[0], values[1], values[2]);
    else if (count == 4)
        result = product(4, values[0], values[1], values[2], values[3]);
    else
        result = product(5, values[0], values[1], values[2], values[3], values[4]);

    printf("Product = %d\n", result);

    return 0;
}
