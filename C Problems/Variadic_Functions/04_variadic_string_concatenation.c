#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void concat_strings(int count, char result[], ...)
{
    va_list args;
    char *str;

    result[0] = '\0';

    va_start(args, result);

    for (int i = 0; i < count; i++)
    {
        str = va_arg(args, char *);
        strcat(result, str);
    }

    va_end(args);
}

int main()
{
    char first[50];
    char second[50];
    char third[50];
    char result[160];

    printf("Enter first string: ");
    scanf("%49s", first);

    printf("Enter second string: ");
    scanf("%49s", second);

    printf("Enter third string: ");
    scanf("%49s", third);

    concat_strings(3, result, first, second, third);

    printf("Concatenated string = %s\n", result);

    return 0;
}
