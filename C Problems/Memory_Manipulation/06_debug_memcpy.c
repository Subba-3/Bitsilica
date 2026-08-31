#include <stdio.h>
#include <string.h>

int main()
{
    char src[100];
    char dst[100];

    printf("Enter a string: ");
    scanf("%99s", src);

    memcpy(dst, src, strlen(src) + 1);

    printf("Copied string: %s\n", dst);

    return 0;
}
