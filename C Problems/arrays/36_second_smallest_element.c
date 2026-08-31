#include <stdio.h>
int main() {
    int a[50], n, i, small, second, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    small = a[0];
    second = 0;
    for (i = 1; i < n; i++) {
        if (a[i] < small) {
            second = small;
            small = a[i];
            found = 1;
        } else if (a[i] > small && (!found || a[i] < second)) {
            second = a[i];
            found = 1;
        }
    }
    if (found) printf("Second smallest element: %d", second);
    else printf("No second smallest element");
    return 0;
}
