#include <stdio.h>

int main()
{
    char str[200];
    int count[256] = {0};
    int i, min = 1000;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] < min)
            min = count[(unsigned char)str[i]];
    }

    printf("Lowest frequency character(s): ");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == min)
        {
            int j, repeated = 0;

            for (j = 0; j < i; j++)
            {
                if (str[j] == str[i])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 0)
                printf("%c ", str[i]);
        }
    }

    return 0;
}
