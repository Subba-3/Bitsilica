#include <stdio.h>
int main() {
    unsigned int n;
    int count = 0;
    printf("Enter number: ");
    scanf("%u", &n);
    while (n) {
        count += n & 1;
        n >> = 1;
    }
    printf("Number of 1 bits: %d", count);
    return 0;
}
