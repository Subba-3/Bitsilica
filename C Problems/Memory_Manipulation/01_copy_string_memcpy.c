#include <stdio.h>
#include <string.h>

int main()
{
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    scanf("%99s", source);

    memcpy(destination, source, strlen(source) + 1);

    printf("Copied string: %s\n", destination);

    return 0;
}
