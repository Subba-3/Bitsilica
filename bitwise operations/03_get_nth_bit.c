#include <stdio.h>
int main() {
    unsigned int n;
    int pos;
    printf("Enter number: ");
    scanf("%u", &n);
    printf("Enter bit position: ");
    scanf("%d", &pos);
    printf("Bit = %u", (n >> pos) & 1);
    return 0;
}
