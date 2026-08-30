#include <stdio.h>
int main() {
    int a[50], n, x, i, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter number to count: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) if (a[i] == x) count++;
    printf("Number occurs %d times", count);
    return 0;
}
