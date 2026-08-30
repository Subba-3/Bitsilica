#include <stdio.h>
int main() {
    int a[100], n, k, i, j, end, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    for (i = 0; i < n; i += 2 * k) {
        end = i + k - 1;
        if (end >= n) end = n - 1;
        for (j = 0; j < (end - i + 1) / 2; j++) {
            temp = a[i + j];
            a[i + j] = a[end - j];
            a[end - j] = temp;
        }
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
