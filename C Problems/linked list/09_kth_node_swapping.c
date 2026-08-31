#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p, *a, *b;
    int n, k, i, x, count = 0, temp;
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
    printf("Enter k: ");
    scanf("%d", &k);
    for (p = h; p; p = p->next) count++;
    a = h;
    b = h;
    for (i = 1; i < k; i++) a = a->next;
    for (i = 1; i < count - k + 1; i++) b = b->next;
    temp = a->data;
    a->data = b->data;
    b->data = temp;
    for (p = h; p; p = p->next) printf("%d ", p->data);
    return 0;
}
