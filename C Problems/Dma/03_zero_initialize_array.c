#include <stdio.h>
#include <stdlib.h>
int main() {
    int * a, n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    a = calloc(n, sizeof(int));
    if (a == NULL) {
        printf("Allocation failed");
        return 0;
    }
    printf("Initial values: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nEnter new values: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Values: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}
