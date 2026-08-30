#include <stdio.h>
int main() {
    int a[50], n, k, i, j, sum, max;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    max = 0;
    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) sum += a[j];
        if (i == 0 || sum > max) max = sum;
    }
    printf("Maximum sum: %d", max);
    return 0;
}
