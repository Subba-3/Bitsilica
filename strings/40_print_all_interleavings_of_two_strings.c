#include <stdio.h>
#include <string.h>

void interleave(char a[], char b[], char result[], int i, int j, int k)
{
    if (a[i] == '\0' && b[j] == '\0')
    {
        result[k] = '\0';
        printf("%s\n", result);
        return;
    }

    if (a[i] != '\0')
    {
        result[k] = a[i];
        interleave(a, b, result, i + 1, j, k + 1);
    }

    if (b[j] != '\0')
    {
        result[k] = b[j];
        interleave(a, b, result, i, j + 1, k + 1);
    }
}

int main()
{
    char str1[50], str2[50], result[100];

    printf("Enter first string: ");
    scanf(" %49s", str1);

    printf("Enter second string: ");
    scanf(" %49s", str2);

    interleave(str1, str2, result, 0, 0, 0);

    return 0;
}
