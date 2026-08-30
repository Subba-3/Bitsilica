#include <stdio.h>

int main()
{
    char str1[200], str2[100], result[200];
    int remove[256] = {0};
    int i, j = 0;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    for (i = 0; str2[i] != '\0'; i++)
        remove[(unsigned char)str2[i]] = 1;

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (remove[(unsigned char)str1[i]] == 0)
            result[j++] = str1[i];
    }

    result[j] = '\0';

    printf("Output: %s", result);

    return 0;
}
