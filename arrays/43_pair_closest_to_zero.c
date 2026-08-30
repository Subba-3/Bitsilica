#include <stdio.h>
int main() {
    int a[50], n, i, j, x, y, sum, bestSum;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    bestSum = a[0] + a[1];
    x = a[0];
    y = a[1];
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++) {
        sum = a[i] + a[j];
        if ((sum < 0  ? - sum: sum) < (bestSum < 0  ? - bestSum: bestSum)) {
            bestSum = sum;
            x = a[i];
            y = a[j];
        }
    }
    printf("Pair: %d %d", x, y);
    return 0;
}
