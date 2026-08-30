#include <stdio.h>
#include <string.h>

int main()
{
    char words[20][50], temp[50];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf(" %49[^\n]", words[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Sorted strings:\n");

    for (i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}
