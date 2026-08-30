#include <stdio.h>
int main() {
    unsigned int n;
    printf("Enter 8-bit number: ");
    scanf("%u", &n);
    n = (~n) & 255;
    printf("Flipped value: %u", n);
    return 0;
}
