#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    char *result;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character to find: ");
    scanf(" %c", &ch);

    result = memchr(str, ch, strlen(str));

    if (result != NULL)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
