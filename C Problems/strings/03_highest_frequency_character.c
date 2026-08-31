#include <stdio.h>

int main()
{
    char str[200], result;
    int count[256] = {0};
    int i, max = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] > max)
        {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    printf("Highest frequency character: %c\n", result);
    printf("Frequency: %d", max);

    return 0;
}
