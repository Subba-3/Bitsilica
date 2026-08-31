#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p;
    int n, i, x, count = 0, mid;
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
    for (p = h; p; p = p->next) count++;
    mid = (count + 1) / 2;
    p = h;
    for (i = 1; i < mid; i++) p = p->next;
    t = p->next;
    p->next = NULL;
    printf("First half: ");
    for (p = h; p; p = p->next) printf("%d ", p->data);
    printf("\nSecond half: ");
    for (p = t; p; p = p->next) printf("%d ", p->data);
    return 0;
}
