#include <stdio.h>
int main() {
    unsigned int n;
    printf("Enter number: ");
    scanf("%u", &n);
    if (n & 1) printf("LSB is set");
    else printf("LSB is not set");
    return 0;
}
