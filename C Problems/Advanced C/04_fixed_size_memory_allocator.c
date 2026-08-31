#include <stdio.h>
#include <stdlib.h>
int main() {
    int blocks, used, i;
    printf("Enter number of blocks: ");
    scanf("%d", &blocks);
    int * pool = malloc(blocks * sizeof(int));
    if (!pool) return 0;
    for (i = 0; i < blocks; i++) pool[i] = 0;
    printf("Enter block number to use: ");
    scanf("%d", &used);
    if (used >= 0 && used < blocks) {
        pool[used] = 1;
        printf("Block %d allocated", used);
    } else printf("Invalid block");
    free(pool);
    return 0;
}
