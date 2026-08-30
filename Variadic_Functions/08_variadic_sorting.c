#include <stdio.h>
#include <stdarg.h>

void sort_numbers(int count, ...)
{
    va_list args;
    int values[5];
    int temp;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        values[i] = va_arg(args, int);
    }

    va_end(args);

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    printf("Sorted values:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", values[i]);
    }

    printf("\n");
}

int main()
{
    int count;
    int values[5];

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
        sort_numbers(1, values[0]);
    else if (count == 2)
        sort_numbers(2, values[0], values[1]);
    else if (count == 3)
        sort_numbers(3, values[0], values[1], values[2]);
    else if (count == 4)
        sort_numbers(4, values[0], values[1], values[2], values[3]);
    else
        sort_numbers(5, values[0], values[1], values[2], values[3], values[4]);

    return 0;
}
