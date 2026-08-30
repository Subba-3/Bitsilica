#include <stdio.h>
int main() {
    int a[50], n, i, j, count, major = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) if (a[i] == a[j]) count++;
        if (count > n / 2) {
            major = a[i];
            break;
        }
    }
    if (major == - 1) printf("No majority element");
    else printf("Majority element: %d", major);
    return 0;
}
