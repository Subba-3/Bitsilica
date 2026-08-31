#include <stdio.h>
#include <stdarg.h>

double average(int count, ...)
{
    va_list args;
    double total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        total = total + va_arg(args, double);
    }

    va_end(args);

    return total / count;
}

int main()
{
    int count;
    double values[5];
    double result;

    printf("Enter number of values (1-5): ");
    scanf("%d", &count);

    if (count < 1 || count > 5)
    {
        printf("Invalid count\n");
        return 1;
    }

    printf("Enter values:\n");

    for (int i = 0; i < count; i++)
    {
        scanf("%lf", &values[i]);
    }

    if (count == 1)
        result = average(1, values[0]);
    else if (count == 2)
        result = average(2, values[0], values[1]);
    else if (count == 3)
        result = average(3, values[0], values[1], values[2]);
    else if (count == 4)
        result = average(4, values[0], values[1], values[2], values[3]);
    else
        result = average(5, values[0], values[1], values[2], values[3], values[4]);

    printf("Average = %.2f\n", result);

    return 0;
}
