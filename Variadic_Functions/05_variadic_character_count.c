#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int count_characters(int count, ...)
{
    va_list args;
    char *str;
    int total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        str = va_arg(args, char *);
        total = total + strlen(str);
    }

    va_end(args);

    return total;
}

int main()
{
    char first[50];
    char second[50];
    char third[50];
    int total;

    printf("Enter first string: ");
    scanf("%49s", first);

    printf("Enter second string: ");
    scanf("%49s", second);

    printf("Enter third string: ");
    scanf("%49s", third);

    total = count_characters(3, first, second, third);

    printf("Total characters = %d\n", total);

    return 0;
}
