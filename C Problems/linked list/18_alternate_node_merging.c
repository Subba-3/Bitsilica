#include <stdio.h>
int main() {
    int a[50], b[50], n, m, i, j = 0;
    printf("Enter sizes: ");
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < m; i++) scanf("%d", &b[i]);
    i = 0;
    while (i < n || j < m) {
        if (i < n) printf("%d ", a[i++]);
        if (j < m) printf("%d ", b[j++]);
    }
    return 0;
}
