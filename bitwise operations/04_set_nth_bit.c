#include <stdio.h>
int main() {
    unsigned int n;
    int pos;
    printf("Enter number: ");
    scanf("%u", &n);
    printf("Enter bit position: ");
    scanf("%d", &pos);
    n = n | (1u << pos);
    printf("Result = %u", n);
    return 0;
}
