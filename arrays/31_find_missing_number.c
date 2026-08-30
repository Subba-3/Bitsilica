#include <stdio.h>
int main() {
    int a[100], n, i, total = 0, actual = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers from 1 to %d with one missing: ", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        actual += a[i];
    }
    for (i = 1; i <= n; i++) total += i;
    printf("Missing number: %d", total - actual);
    return 0;
}
