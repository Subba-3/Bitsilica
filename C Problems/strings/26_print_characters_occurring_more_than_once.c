#include <stdio.h>

int main()
{
    char str[200];
    int count[256] = {0};
    int printed[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    printf("Repeated characters: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] > 1 &&
            printed[(unsigned char)str[i]] == 0)
        {
            printf("%c ", str[i]);
            printed[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}
