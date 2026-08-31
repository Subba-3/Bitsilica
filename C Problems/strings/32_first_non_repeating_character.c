#include <stdio.h>

int main()
{
    char str[200];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character");

    return 0;
}
