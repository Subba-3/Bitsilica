#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, number = 0, sign = 1;

    printf("Enter numeric string: ");
    scanf(" %99s", str);

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            printf("Invalid numeric string");
            return 0;
        }

        number = number * 10 + (str[i] - '0');
        i++;
    }

    printf("Integer: %d", number * sign);

    return 0;
}
