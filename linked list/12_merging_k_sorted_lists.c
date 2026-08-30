#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
}
;
int main() {
    struct Node * list[10];
    int k, size[10], i, j, x, min, idx;
    struct Node * h = NULL, *t = NULL, *p;
    printf("Enter number of lists: ");
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        list[i] = NULL;
        t = NULL;
        printf("Enter size: ");
        scanf("%d", &size[i]);
        for (j = 0; j < size[i]; j++) {
            scanf("%d", &x);
            p = malloc(sizeof(struct Node));
            p->data = x;
            p->next = NULL;
            if (!list[i]) list[i] = p;
            else t->next = p;
            t = p;
        }
    } while (1) {
        idx = -1;
        for (i = 0; i < k; i++) if (list[i] && (idx == - 1 || list[i]->data < min)) {
            idx = i;
            min = list[i]->data;
        }
        if (idx == - 1) break;
        p = malloc(sizeof(struct Node));
        p->data = list[idx]->data;
        p->next = NULL;
        list[idx] = list[idx]->next;
        if (!h) h = p;
        else t->next = p;
        t = p;
    }
    for (p = h; p; p = p->next) printf("%d ", p->data);
    return 0;
}
