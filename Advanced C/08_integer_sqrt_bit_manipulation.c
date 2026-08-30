#include <stdio.h>
int main() {
    unsigned int n, i = 0;
    printf("Enter number: ");
    scanf("%u", &n);
    while ((i + 1) * (i + 1) <= n) i++;
    printf("Integer square root: %u", i);
    return 0;
}
