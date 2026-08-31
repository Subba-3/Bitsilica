#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int count1[256] = {0};
    int count2[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    for (i = 0; str1[i] != '\0'; i++)
        count1[(unsigned char)str1[i]]++;

    for (i = 0; str2[i] != '\0'; i++)
        count2[(unsigned char)str2[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
