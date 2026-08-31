#include <stdio.h>
struct Node {
    int data;
    int left;
    int right;
}
;
int main() {
    struct Node t[20];
    int n, i, stack[20], top = -1, current;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Node %d data leftIndex rightIndex (-1 if none): ", i);
        scanf("%d%d%d", &t[i].data, &t[i].left, &t[i].right);
    }
    printf("Inorder: ");
    current = 0;
    while (current != - 1 || top != - 1) {
        while (current != - 1) {
            stack[++top] = current;
            current = t[current].left;
        }
        current = stack[top--];
        printf("%d ", t[current].data);
        current = t[current].right;
    }
    return 0;
}
