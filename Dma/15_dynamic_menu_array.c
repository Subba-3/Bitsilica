#include <stdio.h>
#include <stdlib.h>
int main() {
    int * a = NULL, n = 0, choice, value, i;
    while (1) {
        printf("\n1 Add\n2 Display\n3 Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            a = realloc(a, (n + 1) * sizeof(int));
            a[n] = value;
            n++;
        } else if (choice == 2) {
            for (i = 0; i < n; i++) printf("%d ", a[i]);
        } else if (choice == 3) break;
        else printf("Invalid choice");
    }
    free(a);
    return 0;
}
