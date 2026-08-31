#include <stdio.h>
int main() {
    int a[100], n, i, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i + 1 < n; i += 2) {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
