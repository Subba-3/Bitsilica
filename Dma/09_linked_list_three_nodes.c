#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * a, *b, *c;
    int x, y, z;
    printf("Enter 3 values: ");
    scanf("%d%d%d", &x, &y, &z);
    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    c = malloc(sizeof(struct Node));
    a->data = x;
    b->data = y;
    c->data = z;
    a->next = b;
    b->next = c;
    c->next = NULL;
    while (a != NULL) {
        printf("%d ", a->data);
        a = a->next;
    }
    free(b);
    free(c);
    return 0;
}
