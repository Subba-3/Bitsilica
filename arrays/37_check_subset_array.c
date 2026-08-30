#include <stdio.h>
int main() {
    int a[50], b[50], n, m, i, j, found, subset = 1;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &m);
    printf("Enter elements: ");
    for (i = 0; i < m; i++) scanf("%d", &b[i]);
    for (i = 0; i < m; i++) {
        found = 0;
        for (j = 0; j < n; j++) if (b[i] == a[j]) found = 1;
        if (!found) subset = 0;
    }
    if (subset) printf("Second array is a subset");
    else printf("Second array is not a subset");
    return 0;
}
