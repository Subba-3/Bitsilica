#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p;
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
    for (p = h; p && p->next; p = p->next->next) {
        temp = p->data;
        p->data = p->next->data;
        p->next->data = temp;
    }
    for (p = h; p; p = p->next) printf("%d ", p->data);
    return 0;
}
