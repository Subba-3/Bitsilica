#include <stdio.h>

int main()
{
    char str[200];
    char old_char, new_char;
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter character to replace: ");
    scanf(" %c", &old_char);

    printf("Enter new character: ");
    scanf(" %c", &new_char);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == old_char)
            str[i] = new_char;
    }

    printf("Output: %s", str);

    return 0;
}
