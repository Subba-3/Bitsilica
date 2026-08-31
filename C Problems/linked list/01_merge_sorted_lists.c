#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
struct Node * newNode(int x) {
    struct Node * n = malloc(sizeof(struct Node));
    n->data = x;
    n->next = NULL;
    return n;
}
void display(struct Node * h) {
    while (h) {
        printf("%d ", h->data);
        h = h->next;
    }
}
struct Node * make(int n) {
    struct Node * h = NULL, *t = NULL, *p;
    int i, x;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        p = newNode(x);
        if (!h) h = p;
        else t->next = p;
        t = p;
    }
    return h;
}
int main() {
    struct Node * a, *b, *h = NULL, *t = NULL, *p;
    int n, m;
    printf("Enter sizes: ");
    scanf("%d%d", &n, &m);
    printf("Enter first sorted list: ");
    a = make(n);
    printf("Enter second sorted list: ");
    b = make(m);
    while (a && b) {
        if (a->data < b->data) {
            p = newNode(a->data);
            a = a->next;
        } else {
            p = newNode(b->data);
            b = b->next;
        }
        if (!h) h = p;
        else t->next = p;
        t = p;
    } while (a) {
        p = newNode(a->data);
        if (!h) h = p;
        else t->next = p;
        t = p;
        a = a->next;
    } while (b) {
        p = newNode(b->data);
        if (!h) h = p;
        else t->next = p;
        t = p;
        b = b->next;
    }
    display(h);
    return 0;
}
