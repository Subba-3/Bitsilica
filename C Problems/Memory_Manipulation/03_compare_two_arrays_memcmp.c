#include <stdio.h>
#include <string.h>

int main()
{
    char first[100];
    char second[100];

    printf("Enter first string: ");
    scanf("%99s", first);

    printf("Enter second string: ");
    scanf("%99s", second);

    if (memcmp(first, second, strlen(first) + 1) == 0 &&
        strlen(first) == strlen(second))
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}
