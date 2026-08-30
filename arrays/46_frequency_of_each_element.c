#include <stdio.h>
int main() {
    int a[50], n, i, j, count, done[50] = {
        0
    }
    ;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        if (done[i]) continue;
        count = 1;
        for (j = i + 1; j < n; j++) if (a[i] == a[j]) {
            count++;
            done[j] = 1;
        }
        printf("%d: %d\n", a[i], count);
    }
    return 0;
}
