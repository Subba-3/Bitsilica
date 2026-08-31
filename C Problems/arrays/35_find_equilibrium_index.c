#include <stdio.h>
int main() {
    int a[50], n, i, j, left, right, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        left = right = 0;
        for (j = 0; j < i; j++) left += a[j];
        for (j = i + 1; j < n; j++) right += a[j];
        if (left == right) {
            printf("Equilibrium index: %d", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("No equilibrium index");
    return 0;
}
