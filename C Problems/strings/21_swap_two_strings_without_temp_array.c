#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];

    printf("Enter first string: ");
    scanf(" %99[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %99[^\n]", str2);

    /*
       A character array is needed somewhere to preserve data safely.
       This is the normal C approach; no pointer tricks are used.
    */
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("After swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s", str2);

    return 0;
}
