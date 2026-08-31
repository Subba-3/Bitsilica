#include <stdio.h>
int main() {
    unsigned int n;
    int i, ones = 0, zeros = 0;
    printf("Enter number: ");
    scanf("%u", &n);
    for (i = 0; i < 8; i++) {
        if (n & (1u << i)) ones++;
        else zeros++;
    }
    printf("Ones: %d\nZeros: %d", ones, zeros);
    return 0;
}
