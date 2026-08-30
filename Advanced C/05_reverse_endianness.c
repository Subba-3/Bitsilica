#include <stdio.h>
unsigned int rev(unsigned int x) {
    return((x & 0x000000ff) << 24) | ((x & 0x0000ff00) << 8) | ((x & 0x00ff0000) >> 8) | ((x & 0xff000000) >> 24);
}
int main() {
    unsigned int x;
    printf("Enter 32-bit unsigned value: ");
    scanf("%u", &x);
    printf("Reversed value: %u", rev(x));
    return 0;
}
