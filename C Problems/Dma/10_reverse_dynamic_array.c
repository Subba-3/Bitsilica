#include <stdio.h>
#include <stdlib.h>
int main() {
    int * a, n, i, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    if (a == NULL) return 0;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}
