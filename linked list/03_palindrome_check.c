#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p;
    int a[50], n, i, same = 1, x;
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
        a[i] = x;
    }
    for (i = 0; i < n / 2; i++) if (a[i] != a[n - 1 - i]) same = 0;
    if (same) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
