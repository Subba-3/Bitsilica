#include <stdio.h>

void init()
{
    printf("Device initialized\n");
}

void start()
{
    printf("Device started\n");
}

void stop()
{
    printf("Device stopped\n");
}

int main()
{
    void (*commands[3])(void) = {init, start, stop};
    int choice;

    printf("0 - Init\n");
    printf("1 - Start\n");
    printf("2 - Stop\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 2)
        commands[choice]();
    else
        printf("Invalid choice");

    return 0;
}
