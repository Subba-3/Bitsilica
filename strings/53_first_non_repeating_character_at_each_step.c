#include <stdio.h>

int main()
{
    char stream[200];
    int count[256] = {0};
    int i, j;

    printf("Enter character stream: ");
    scanf(" %199s", stream);

    for (i = 0; stream[i] != '\0'; i++)
        count[(unsigned char)stream[i]]++;

    for (i = 0; stream[i] != '\0'; i++)
    {
        int found = 0;

        printf("After adding %c: ", stream[i]);

        for (j = 0; j <= i; j++)
        {
            if (count[(unsigned char)stream[j]] == 1)
            {
                /*
                   We need frequency only in the prefix.
                   Recount this small prefix for correct step-by-step output.
                */
                int k, prefix_count = 0;

                for (k = 0; k <= i; k++)
                {
                    if (stream[k] == stream[j])
                        prefix_count++;
                }

                if (prefix_count == 1)
                {
                    printf("%c\n", stream[j]);
                    found = 1;
                    break;
                }
            }
        }

        if (!found)
            printf("-1\n");
    }

    return 0;
}
