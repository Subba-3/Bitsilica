#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], combined[200];
    int len1, len2;
    int i, j, found = 0;

    printf("Enter first string: ");
    scanf(" %99[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %99[^\n]", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
            combined[i] = str1[i];

        for (i = 0; i < len1; i++)
            combined[len1 + i] = str1[i];

        combined[2 * len1] = '\0';

        for (i = 0; i < len1; i++)
        {
            found = 1;

            for (j = 0; j < len2; j++)
            {
                if (combined[i + j] != str2[j])
                {
                    found = 0;
                    break;
                }
            }

            if (found)
                break;
        }
    }

    if (found)
        printf("Yes, it is a rotation");
    else
        printf("No, it is not a rotation");

    return 0;
}
