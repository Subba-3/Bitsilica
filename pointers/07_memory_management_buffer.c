#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buffer;
    int size, i;
    char ch;

    printf("Enter buffer size: ");
    scanf("%d", &size);

    buffer = (char *)malloc((size + 1) * sizeof(char));

    if (buffer == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter text: ");
    scanf(" %c", &ch);

    i = 0;

    while (i < size && ch != '\n')
    {
        buffer[i] = ch;
        i++;

        if (i < size)
            scanf("%c", &ch);
    }

    buffer[i] = '\0';

    printf("Stored text: %s", buffer);

    free(buffer);

    return 0;
}
