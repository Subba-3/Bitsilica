#include <stdio.h>

void remove_adjacent(char str[])
{
    int i = 0, j;

    while (str[i] != '\0' && str[i + 1] != '\0')
    {
        if (str[i] == str[i + 1])
        {
            j = i;

            while (str[j] != '\0')
            {
                str[j] = str[j + 2];
                j++;
            }

            remove_adjacent(str);
            return;
        }

        i++;
    }
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    scanf(" %199s", str);

    remove_adjacent(str);

    printf("Output: %s", str);

    return 0;
}
