#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
void add(struct Node * *h, struct Node * *t, int x) {
    struct Node * p = malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    if (!*h) * h = p;
    else(*t)->next = p;
    *t = p;
}
void show(struct Node * h) {
    while (h) {
        printf("%d ", h->data);
        h = h->next;
    }
}
int main() {
    struct Node * h = NULL, *t = NULL, *l = NULL, *lt = NULL, *e = NULL, *et = NULL, *g = NULL, *gt = NULL, *p;
    int n, x, i;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        add(&h, &t, x);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    for (p = h; p; p = p->next) {
        if (p->data < x) add(&l, &lt, p->data);
        else if (p->data == x) add(&e, &et, p->data);
        else add(&g, &gt, p->data);
    }
    show(l);
    show(e);
    show(g);
    return 0;
}
