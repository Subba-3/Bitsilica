#include <stdio.h>

#define DEBUG

int main()
{
#ifdef DEBUG
    printf("Debug mode is ON\n");
#endif

    printf("Program is running\n");

    return 0;
}
