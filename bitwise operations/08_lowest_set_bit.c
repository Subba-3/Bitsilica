#include <stdio.h>
int main() {
    unsigned int n;
    int pos = 0;
    printf("Enter number: ");
    scanf("%u", &n);
    if (n == 0) {
        printf("No set bit");
        return 0;
    } while ((n & 1) == 0) {
        pos++;
        n = n >> 1;
    }
    printf("Lowest set bit position: %d", pos);
    return 0;
}
