#include <stdio.h>

int main()
{
    char str[200], result = '\0';
    int count[256] = {0};
    int i;
    int highest = 0, second = 0;

    printf("Enter a string: ");
    scanf(" %199[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (count[i] > highest)
            highest = count[i];
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] > second && count[i] < highest)
            second = count[i];
    }

    if (second == 0)
    {
        printf("No second highest frequency character");
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == second)
        {
            result = str[i];
            break;
        }
    }

    printf("Second highest frequency character: %c\n", result);
    printf("Frequency: %d", second);

    return 0;
}
