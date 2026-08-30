#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * a = NULL, *b = NULL, *t, *p;
    int n, m, i, x, found = 0;
    printf("Enter sizes: ");
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        p = malloc(sizeof(struct Node));
        p->data = x;
        p->next = a;
        a = p;
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &x);
        p = malloc(sizeof(struct Node));
        p->data = x;
        p->next = b;
        b = p;
    }
    for (t = a; t && !found; t = t->next) for (p = b; p; p = p->next) if (t->data == p->data) {
        printf("Intersection value: %d", t->data);
        found = 1;
        break;
    }
    if (!found) printf("No intersection");
    return 0;
}
