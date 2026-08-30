#include <stdio.h>

int main()
{
    char str[300];
    int last[256];
    int i, start = 0, max_len = 0;
    int current_len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (last[(unsigned char)str[i]] >= start)
            start = last[(unsigned char)str[i]] + 1;

        current_len = i - start + 1;

        if (current_len > max_len)
            max_len = current_len;

        last[(unsigned char)str[i]] = i;
    }

    printf("Longest length: %d", max_len);

    return 0;
}
