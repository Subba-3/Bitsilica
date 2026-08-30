#include <stdio.h>
int main() {
    unsigned int n;
    printf("Enter number: ");
    scanf("%u", &n);
    if (n == 0) printf("No set bit");
    else printf("Rightmost set bit value: %u", n & (~n + 1));
    return 0;
}
