#include <stdio.h>
#include <stdlib.h>
int main() {
    int * a, n, pos, value, i;
    printf("Enter size: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter position and value: ");
    scanf("%d%d", &pos, &value);
    a = realloc(a, (n + 1) * sizeof(int));
    for (i = n; i > pos; i--) a[i] = a[i - 1];
    a[pos] = value;
    n++;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}
