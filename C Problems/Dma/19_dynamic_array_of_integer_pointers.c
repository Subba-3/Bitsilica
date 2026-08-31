#include <stdio.h>
#include <stdlib.h>
int main() {
    int * *p, n, i;
    printf("Enter count: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(int * ));
    if (p == NULL) return 0;
    for (i = 0; i < n; i++) {
        p[i] = malloc(sizeof(int));
        printf("Enter value %d: ", i + 1);
        scanf("%d", p[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", *p[i]);
        free(p[i]);
    }
    free(p);
    return 0;
}
