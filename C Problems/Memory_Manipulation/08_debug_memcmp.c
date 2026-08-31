#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter your name: ");
    scanf("%99s", name);

    if (memcmp(name, "John", 4) == 0 && strlen(name) == 4)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}
