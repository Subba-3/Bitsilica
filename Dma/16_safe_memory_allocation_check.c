#include <stdio.h>
#include <stdlib.h>
int main() {
    size_t size;
    void * p;
    printf("Enter memory size in bytes: ");
    scanf("%zu", &size);
    p = malloc(size);
    if (p == NULL) printf("Allocation failed");
    else {
        printf("Allocation successful");
        free(p);
    }
    return 0;
}
