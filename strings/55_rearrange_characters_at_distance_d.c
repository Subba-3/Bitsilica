#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], result[200];
    int used[200] = {0};
    int last[256];
    int d, i, j, best;

    printf("Enter a string: ");
    scanf(" %199s", str);

    printf("Enter minimum distance: ");
    scanf("%d", &d);

    if (d <= 1)
    {
        printf("Output: %s", str);
        return 0;
    }

    for (i = 0; i < 256; i++)
        last[i] = -d;

    for (i = 0; str[i] != '\0'; i++)
    {
        best = -1;

        for (j = 0; str[j] != '\0'; j++)
        {
            if (!used[j] &&
                last[(unsigned char)str[j]] <= i - d)
            {
                best = j;
                break;
            }
        }

        if (best == -1)
        {
            printf("Cannot rearrange");
            return 0;
        }

        result[i] = str[best];
        used[best] = 1;
        last[(unsigned char)str[best]] = i;
    }

    result[i] = '\0';

    printf("Output: %s", result);

    return 0;
}
