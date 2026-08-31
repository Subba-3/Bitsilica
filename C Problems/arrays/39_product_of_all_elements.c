#include <stdio.h>
int main() {
    int a[50], n, i;
    long long product = 1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        product *= a[i];
    }
    printf("Product: %lld", product);
    return 0;
}
