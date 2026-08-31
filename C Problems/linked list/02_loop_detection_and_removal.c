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
int main() {
    struct Node * h = NULL, *t = NULL, *p, *slow, *fast;
    int n, i, x, pos;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        p = newNode(x);
        if (!h) h = p;
        else t->next = p;
        t = p;
    }
    printf("Enter position for loop, 0 for no loop: ");
    scanf("%d", &pos);
    if (pos > 0 && pos <= n) {
        p = h;
        for (i = 1; i < pos; i++) p = p->next;
        t->next = p;
    }
    slow = fast = h;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    if (slow != fast) printf("No loop");
    else {
        slow = h;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        p = fast;
        while (p->next != fast) p = p->next;
        p->next = NULL;
        printf("Loop detected and removed");
    }
    return 0;
}
