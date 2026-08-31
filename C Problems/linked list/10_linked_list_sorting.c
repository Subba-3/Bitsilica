#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p, *q;
    int n, i, x, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        p = malloc(sizeof(struct Node));
        p->data = x;
        p->next = NULL;
        if (!h) h = p;
        else t->next = p;
        t = p;
    }
    for (p = h; p; p = p->next) for (q = p->next; q; q = q->next) if (p->data > q->data) {
        temp = p->data;
        p->data = q->data;
        q->data = temp;
    }
    for (p = h; p; p = p->next) printf("%d ", p->data);
    return 0;
}
