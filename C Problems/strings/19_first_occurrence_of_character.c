#include <stdio.h>

int main()
{
    char str[200], ch;
    int i, position = -1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
        printf("Character not found");
    else
        printf("First occurrence at index: %d", position);

    return 0;
}
