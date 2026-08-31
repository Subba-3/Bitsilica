#include <stdio.h>
#include <string.h>

int check(char s1[], char s2[], char s3[], int i, int j, int k)
{
    if (s3[k] == '\0')
        return 1;

    if (s1[i] != '\0' && s1[i] == s3[k])
    {
        if (check(s1, s2, s3, i + 1, j, k + 1))
            return 1;
    }

    if (s2[j] != '\0' && s2[j] == s3[k])
    {
        if (check(s1, s2, s3, i, j + 1, k + 1))
            return 1;
    }

    return 0;
}

int main()
{
    char s1[100], s2[100], s3[200];

    printf("Enter first string: ");
    scanf(" %99s", s1);

    printf("Enter second string: ");
    scanf(" %99s", s2);

    printf("Enter third string: ");
    scanf(" %199s", s3);

    if (strlen(s1) + strlen(s2) != strlen(s3))
    {
        printf("False");
        return 0;
    }

    if (check(s1, s2, s3, 0, 0, 0))
        printf("True");
    else
        printf("False");

    return 0;
}
