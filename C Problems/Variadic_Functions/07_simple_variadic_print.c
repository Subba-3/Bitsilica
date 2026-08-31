#include <stdio.h>
#include <stdarg.h>

void print_values(int count, ...)
{
    va_list args;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        printf("%d ", va_arg(args, int));
    }

    va_end(args);

    printf("\n");
}

int main()
{
    int count;
    int values[5];

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
        scanf("%d", &values[i]);
    }

    if (count == 1)
        print_values(1, values[0]);
    else if (count == 2)
        print_values(2, values[0], values[1]);
    else if (count == 3)
        print_values(3, values[0], values[1], values[2]);
    else if (count == 4)
        print_values(4, values[0], values[1], values[2], values[3]);
    else
        print_values(5, values[0], values[1], values[2], values[3], values[4]);

    return 0;
}
