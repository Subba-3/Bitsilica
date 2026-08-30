#include <stdio.h>

struct Peripheral
{
    int status;
    int control;
    int data;
};

int main()
{
    struct Peripheral arr[5];
    struct Peripheral *p;
    int i;

    p = arr;

    printf("Enter data for 5 peripherals:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Peripheral %d status: ", i + 1);
        scanf("%d", &(p + i)->status);

        printf("Peripheral %d control: ", i + 1);
        scanf("%d", &(p + i)->control);

        printf("Peripheral %d data: ", i + 1);
        scanf("%d", &(p + i)->data);
    }

    printf("Peripheral data:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d %d %d\n",
               (p + i)->status,
               (p + i)->control,
               (p + i)->data);
    }

    return 0;
}
