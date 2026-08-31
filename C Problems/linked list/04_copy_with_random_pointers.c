#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
    struct Node * random;
}
;
int main() {
    struct Node * orig[50], *copy[50];
    int n, i, j, x, pos;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        orig[i] = malloc(sizeof(struct Node));
        orig[i]->data = x;
        orig[i]->next = NULL;
        orig[i]->random = NULL;
        if (i > 0) orig[i - 1]->next = orig[i];
    }
    for (i = 0; i < n; i++) {
        printf("Random position for node %d, 0 for NULL: ", i + 1);
        scanf("%d", &pos);
        if (pos > 0 && pos <= n) orig[i]->random = orig[pos - 1];
    }
    for (i = 0; i < n; i++) {
        copy[i] = malloc(sizeof(struct Node));
        copy[i]->data = orig[i]->data;
        copy[i]->next = i < n - 1  ? copy[i + 1]: NULL;
        copy[i]->random = NULL;
    }
    for (i = 0; i < n; i++) if (orig[i]->random) for (j = 0; j < n; j++) if (orig[i]->random == orig[j]) copy[i]->random = copy[j];
    printf("Copied list: ");
    for (i = 0; i < n; i++) printf("%d ", copy[i]->data);
    return 0;
}
