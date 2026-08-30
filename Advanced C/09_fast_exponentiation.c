#include <stdio.h>
int main() {
    long long base, result = 1;
    int exp;
    printf("Enter base and exponent: ");
    scanf("%lld%d", &base, &exp);
    while (exp > 0) {
        if (exp % 2) result *= base;
        base *= base;
        exp /= 2;
    }
    printf("Result: %lld", result);
    return 0;
}
