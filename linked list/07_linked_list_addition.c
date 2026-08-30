#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
struct Node * make(int n) {
    struct Node * h = NULL, *t = NULL, *p;
    while (n) {
        p = malloc(sizeof(struct Node));
        p->data = n % 10;
        p->next = NULL;
        if (!h) h = p;
        else t->next = p;
        t = p;
        n /= 10;
    }
    return h;
}
int main() {
    struct Node * a, *b, *h = NULL, *t = NULL, *p;
    int x, y, carry = 0, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    a = make(x);
    b = make(y);
    while (a || b || carry) {
        sum = carry;
        if (a) {
            sum += a->data;
            a = a->next;
        }
        if (b) {
            sum += b->data;
            b = b->next;
        }
        p = malloc(sizeof(struct Node));
        p->data = sum % 10;
        p->next = NULL;
        carry = sum / 10;
        if (!h) h = p;
        else t->next = p;
        t = p;
    }
    printf("Result: ");
    while (h) {
        printf("%d", h->data);
        h = h->next;
    }
    return 0;
}
