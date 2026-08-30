#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int count[200][200] = {0};
    int i, j, max = 0, end = 0;

    printf("Enter first string: ");
    scanf(" %199s", str1);

    printf("Enter second string: ");
    scanf(" %199s", str2);

    for (i = 1; str1[i - 1] != '\0'; i++)
    {
        for (j = 1; str2[j - 1] != '\0'; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                count[i][j] = count[i - 1][j - 1] + 1;

                if (count[i][j] > max)
                {
                    max = count[i][j];
                    end = i;
                }
            }
        }
    }

    if (max == 0)
    {
        printf("No common substring");
        return 0;
    }

    printf("Longest common substring: ");

    for (i = end - max; i < end; i++)
        printf("%c", str1[i]);

    return 0;
}
