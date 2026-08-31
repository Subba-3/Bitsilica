#include <stdio.h>
#include <stdlib.h>
int main() {
    int * *a, r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    a = malloc(r * sizeof(int * ));
    if (a == NULL) return 0;
    for (i = 0; i < r; i++) a[i] = malloc(c * sizeof(int));
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < r; i++) free(a[i]);
    free(a);
    return 0;
}
