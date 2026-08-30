#include <stdio.h>
int main() {
    int a[50], n, i, j, leader;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Leader elements: ");
    for (i = 0; i < n; i++) {
        leader = 1;
        for (j = i + 1; j < n; j++) if (a[i] <= a[j]) leader = 0;
        if (leader) printf("%d ", a[i]);
    }
    return 0;
}
