#include <stdio.h>
int main() {
    int a[50], b[50], n, m, i, j, found;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &m);
    printf("Enter elements: ");
    for (i = 0; i < m; i++) scanf("%d", &b[i]);
    printf("Intersection: ");
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < m; j++) if (a[i] == b[j]) found = 1;
        if (found) {
            for (j = 0; j < i; j++) if (a[j] == a[i]) found = 0;
            if (found) printf("%d ", a[i]);
        }
    }
    return 0;
}
