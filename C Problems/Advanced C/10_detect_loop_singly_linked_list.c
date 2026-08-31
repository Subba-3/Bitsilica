#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * a, *b, *c, *slow, *fast;
    int pos;
    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    c = malloc(sizeof(struct Node));
    scanf("%d%d%d", &a->data, &b->data, &c->data);
    a->next = b;
    b->next = c;
    c->next = NULL;
    printf("Loop position, 0 for none: ");
    scanf("%d", &pos);
    if (pos == 1) c->next = a;
    else if (pos == 2) c->next = b;
    slow = fast = a;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            printf("Loop detected");
            return 0;
        }
    }
    printf("No loop");
    return 0;
}
