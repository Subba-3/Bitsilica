#include <stdio.h>
#include <string.h>

int contains_all(char part[], char target[])
{
    int need[256] = {0};
    int have[256] = {0};
    int i;

    for (i = 0; target[i] != '\0'; i++)
        need[(unsigned char)target[i]]++;

    for (i = 0; part[i] != '\0'; i++)
        have[(unsigned char)part[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (have[i] < need[i])
            return 0;
    }

    return 1;
}

int main()
{
    char str[300], target[100], part[300], best[300];
    int left, right, i, k;
    int best_len = 1000;
    int len;

    printf("Enter main string: ");
    scanf(" %[^\n]", str);

    printf("Enter target characters: ");
    scanf(" %99s", target);

    len = strlen(str);

    /*
       Expanding a window and moving its left side keeps the logic
       simple while avoiding checking every possible substring twice.
    */
    left = 0;

    for (right = 0; right < len; right++)
    {
        while (left <= right)
        {
            k = 0;

            for (i = left; i <= right; i++)
                part[k++] = str[i];

            part[k] = '\0';

            if (!contains_all(part, target))
                break;

            if (right - left + 1 < best_len)
            {
                best_len = right - left + 1;

                for (i = 0; i <= k; i++)
                    best[i] = part[i];
            }

            left++;
        }
    }

    if (best_len == 1000)
        printf("No substring found");
    else
        printf("Smallest substring: %s", best);

    return 0;
}
