#include <stdio.h>
int main() {
    unsigned int n;
    int count = 0, bit;
    printf("Enter number: ");
    scanf("%u", &n);
    bit = 31;
    while (bit >= 0 && ((n >> bit) & 1) == 0) {
        count++;
        bit--;
    }
    printf("Leading zeros: %d", count);
    return 0;
}
