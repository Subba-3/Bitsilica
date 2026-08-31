#include <stdio.h>

int are_anagrams(char a[], char b[])
{
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    for (i = 0; a[i] != '\0'; i++)
        count1[(unsigned char)a[i]]++;

    for (i = 0; b[i] != '\0'; i++)
        count2[(unsigned char)b[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main()
{
    char words[20][50];
    int used[20] = {0};
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf(" %49s", words[i]);
    }

    printf("Anagram groups:\n");

    for (i = 0; i < n; i++)
    {
        if (used[i])
            continue;

        printf("[ ");

        for (j = i; j < n; j++)
        {
            if (!used[j] && are_anagrams(words[i], words[j]))
            {
                printf("%s ", words[j]);
                used[j] = 1;
            }
        }

        printf("]\n");
    }

    return 0;
}
