#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100], result[200];
    char *p1, *p2, *p3;
    int i;

    printf("Enter first string: ");
    scanf(" %99[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %99[^\n]", str2);

    p1 = str1;
    p2 = str2;
    p3 = result;

    while (*p1 != '\0')
    {
        *p3 = *p1;
        p1++;
        p3++;
    }

    *p3 = ' ';
    p3++;

    while (*p2 != '\0')
    {
        *p3 = *p2;
        p2++;
        p3++;
    }

    *p3 = '\0';

    printf("Concatenated string: %s\n", result);

    p1 = result;
    p2 = result + strlen(result) - 1;

    while (p1 < p2)
    {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }

    printf("Reversed string: %s", result);

    return 0;
}
