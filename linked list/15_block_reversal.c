#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * h = NULL, *t = NULL, *p;
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
    int a[100], c = 0, j, temp;
    for (p = h; p; p = p->next) a[c++] = p->data;
    for (i = 0; i < c; i += k) {
        int end = i + k - 1;
        if (end >= c) end = c - 1;
        for (j = i; j <= end; j++) for (x = i; x < end - j; x++) {
        }
        for (j = 0; j < (end - i + 1) / 2; j++) {
            temp = a[i + j];
            a[i + j] = a[end - j];
            a[end - j] = temp;
        }
    }
    for (i = 0; i < c; i++) printf("%d ", a[i]);
    return 0;
}
