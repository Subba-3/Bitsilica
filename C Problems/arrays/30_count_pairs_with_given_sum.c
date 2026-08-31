#include <stdio.h>
int main() {
    int a[50], n, sum, i, j, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter sum: ");
    scanf("%d", &sum);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++) if (a[i] + a[j] == sum) count++;
    printf("Number of pairs: %d", count);
    return 0;
}
