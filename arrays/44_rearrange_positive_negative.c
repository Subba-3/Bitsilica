#include <stdio.h>
int main() {
    int a[50], n, i, j, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++) for (j = i + 1; j < n; j++) if ((i % 2 == 0 && a[i] < 0 && a[j] >= 0) || (i % 2 == 1 && a[i] >= 0 && a[j] < 0)) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        break;
    }
    printf("Rearranged array: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
