#include <stdio.h>

int main()
{
    char str[200], result[200];
    int seen[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (seen[(unsigned char)str[i]] == 0)
        {
            result[j++] = str[i];
            seen[(unsigned char)str[i]] = 1;
        }
    }

    result[j] = '\0';

    printf("Output: %s", result);

    return 0;
}
