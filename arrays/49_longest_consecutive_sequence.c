#include <stdio.h>
int main() {
    int a[50], n, i, j, current, longest = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        current = 1;
        for (j = 0; j < n; j++) if (a[j] == a[i] + current) current++;
        if (current > longest) longest = current;
    }
    printf("Longest consecutive sequence length: %d", longest);
    return 0;
}
