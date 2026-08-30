#include <stdio.h>
#include <stdlib.h>
int main() {
    int * p;
    printf("Enter value: ");
    p = malloc(sizeof(int));
    if (p == NULL) {
        printf("Allocation failed");
        return 0;
    }
    scanf("%d", p);
    printf("Value = %d", *p);
    free(p);
    return 0;
}
