#include <stdio.h>
int main() {
    unsigned int reg;
    int bit;
    printf("Enter register value: ");
    scanf("%u", &reg);
    printf("Enter GPIO bit: ");
    scanf("%d", &bit);
    reg ^= 1u << bit;
    printf("Register after toggle: %u", reg);
    return 0;
}
