#include <stdio.h>
#include <stdarg.h>

void find_max_min(int count, int *max, int *min, ...)
{
    va_list args;
    int value;

    va_start(args, min);

    *max = va_arg(args, int);
    *min = *max;

    for (int i = 1; i < count; i++)
    {
        value = va_arg(args, int);

        if (value > *max)
        {
            *max = value;
        }

        if (value < *min)
        {
            *min = value;
        }
    }

    va_end(args);
}

int main()
{
    int values[5];
    int count;
    int max;
    int min;

    printf("Enter number of integers (2-5): ");
    scanf("%d", &count);

    if (count < 2 || count > 5)
    {
        printf("Invalid count\n");
        return 1;
    }

    printf("Enter integers:\n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &values[i]);
    }

    if (count == 2)
        find_max_min(2, &max, &min, values[0], values[1]);
    else if (count == 3)
        find_max_min(3, &max, &min, values[0], values[1], values[2]);
    else if (count == 4)
        find_max_min(4, &max, &min, values[0], values[1], values[2], values[3]);
    else
        find_max_min(5, &max, &min, values[0], values[1], values[2], values[3], values[4]);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
