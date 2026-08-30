#include <stdio.h>
int main() {
    unsigned int n;
    printf("Enter 8-bit number: ");
    scanf("%u", &n);
    if (n & 0x80) printf("MSB is set");
    else printf("MSB is not set");
    return 0;
}
