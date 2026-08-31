#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char *data;
    char filename[100];
    int size, i;

    printf("Enter file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    data = (char *)malloc((size + 1) * sizeof(char));

    if (data == NULL)
    {
        printf("Memory allocation failed");
        fclose(fp);
        return 0;
    }

    fread(data, sizeof(char), size, fp);
    data[size] = '\0';

    printf("File contents:\n%s", data);

    fp = freopen(filename, "w", fp);

    if (fp != NULL)
    {
        for (i = 0; data[i] != '\0'; i++)
        {
            if (data[i] >= 'a' && data[i] <= 'z')
                data[i] = data[i] - 32;
        }

        fputs(data, fp);
        fclose(fp);
    }

    free(data);

    return 0;
}
