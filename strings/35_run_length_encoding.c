#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, count;

    printf("Enter a string: ");
    scanf(" %199s", str);

    while (str[i] != '\0')
    {
        count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
        i++;
    }

    return 0;
}
