#include <stdio.h>

int contains_all(char str[], char word[])
{
    int need[256] = {0};
    int have[256] = {0};
    int i;

    for (i = 0; word[i] != '\0'; i++)
        need[(unsigned char)word[i]]++;

    for (i = 0; str[i] != '\0'; i++)
        have[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (have[i] < need[i])
            return 0;
    }

    return 1;
}

int main()
{
    char word[50];
    char list[20][100];
    int n, i;

    printf("Enter target word: ");
    scanf(" %49s", word);

    printf("Enter number of strings: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf(" %99[^\n]", list[i]);
    }

    printf("Matching strings:\n");

    for (i = 0; i < n; i++)
    {
        if (contains_all(list[i], word))
            printf("%s\n", list[i]);
    }

    return 0;
}
