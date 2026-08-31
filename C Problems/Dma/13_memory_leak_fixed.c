#include <stdio.h>
#include <stdlib.h>
int main() {
    int * p, i;
    p = malloc(5 * sizeof(int));
    if (p == NULL) return 0;
    for (i = 0; i < 5; i++) {
        printf("Enter value: ");
        scanf("%d", &p[i]);
    }
    printf("Values: ");
    for (i = 0; i < 5; i++) printf("%d ", p[i]);
    free(p);
    return 0;
}
