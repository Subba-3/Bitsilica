#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p;
    int n, k, i, x, count = 0;
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
    printf("Enter n: ");
    scanf("%d", &k);
    for (p = h; p; p = p->next) count++;
    p = h;
    for (i = 1; i < count - k + 1; i++) p = p->next;
    if (k >= 1 && k <= count) printf("Result: %d", p->data);
    else printf("Invalid n");
    return 0;
}
