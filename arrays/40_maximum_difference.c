#include <stdio.h>
int main() {
    int a[50], n, i, minValue, diff, maxDiff;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    minValue = a[0];
    maxDiff = a[1] - a[0];
    for (i = 1; i < n; i++) {
        diff = a[i] - minValue;
        if (diff > maxDiff) maxDiff = diff;
        if (a[i] < minValue) minValue = a[i];
    }
    printf("Maximum difference: %d", maxDiff);
    return 0;
}
