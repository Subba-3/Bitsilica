#include <stdio.h>

struct Status
{
    unsigned int ready : 1;
    unsigned int error : 1;
    unsigned int mode : 2;
};

int main()
{
    struct Status status;
    int value;

    printf("Enter ready value (0/1): ");
    scanf("%d", &value);
    status.ready = value;

    printf("Enter error value (0/1): ");
    scanf("%d", &value);
    status.error = value;

    printf("Enter mode value (0-3): ");
    scanf("%d", &value);
    status.mode = value;

    printf("Ready = %u\n", status.ready);
    printf("Error = %u\n", status.error);
    printf("Mode = %u\n", status.mode);

    status.error = !status.error;

    printf("Error after toggle = %u\n", status.error);

    return 0;
}
