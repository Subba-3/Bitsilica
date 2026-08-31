#include <stdio.h>
int main() {
    int a[100], n, i, j, found;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers from 1 to %d with two missing: ", n - 2, n);
    for (i = 0; i < n - 2; i++) scanf("%d", &a[i]);
    printf("Missing numbers: ");
    for (i = 1; i <= n; i++) {
        found = 0;
        for (j = 0; j < n - 2; j++) if (a[j] == i) found = 1;
        if (!found) printf("%d ", i);
    }
    return 0;
}
