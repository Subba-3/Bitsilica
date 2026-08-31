#include <stdio.h>
#include <stdlib.h>
int main() {
    int * a, *b, n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    b = calloc(n, sizeof(int));
    if (a == NULL || b == NULL) {
        printf("Allocation failed");
        free(a);
        free(b);
        return 0;
    }
    printf("malloc values after assigning: ");
    for (i = 0; i < n; i++) {
        a[i] = i + 1;
        printf("%d ", a[i]);
    }
    printf("\ncalloc initial values: ");
    for (i = 0; i < n; i++) printf("%d ", b[i]);
    free(a);
    free(b);
    return 0;
}
