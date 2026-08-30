#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * odd = NULL, *ot = NULL, *even = NULL, *et = NULL, *p, *q;
    int n, i, x;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        p = malloc(sizeof(struct Node));
        p->data = x;
        p->next = NULL;
        if (x % 2) {
            if (!odd) odd = p;
            else ot->next = p;
            ot = p;
        } else {
            if (!even) even = p;
            else et->next = p;
            et = p;
        }
    }
    if (odd) ot->next = even;
    q = odd  ? odd: even;
    while (q) {
        printf("%d ", q->data);
        q = q->next;
    }
    return 0;
}
