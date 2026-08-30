#include <stdio.h>
#include <stdlib.h>
int main() {
    int * a, n = 2, newn = 5, i;
    printf("Enter 2 values: ");
    a = malloc(n * sizeof(int));
    if (a == NULL) return 0;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    a = realloc(a, newn * sizeof(int));
    if (a == NULL) return 0;
    printf("Enter 3 more values: ");
    for (i = 2; i < newn; i++) scanf("%d", &a[i]);
    printf("Array: ");
    for (i = 0; i < newn; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}
