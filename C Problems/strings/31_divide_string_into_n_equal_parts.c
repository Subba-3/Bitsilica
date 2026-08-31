#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int n, len, part_size;
    int i, j;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter number of parts: ");
    scanf("%d", &n);

    len = strlen(str);

    if (n <= 0 || len % n != 0)
    {
        printf("String cannot be divided into equal parts");
        return 0;
    }

    part_size = len / n;

    for (i = 0; i < n; i++)
    {
        printf("Part %d: ", i + 1);

        for (j = 0; j < part_size; j++)
            printf("%c", str[i * part_size + j]);

        printf("\n");
    }

    return 0;
}
