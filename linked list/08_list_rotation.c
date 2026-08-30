#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p, *last;
    int n, k, i, x;
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
    for (i = 0; i < k && h; i++) {
        last = h;
        while (last->next->next) last = last->next;
        p = last->next;
        last->next = NULL;
        p->next = h;
        h = p;
    } while (h) {
        printf("%d ", h->data);
        h = h->next;
    }
    return 0;
}
