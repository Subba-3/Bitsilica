#include <stdio.h>
int main() {
    int a[50], n, i, same = 1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++) if (a[i] != a[n - 1 - i]) same = 0;
    if (same) printf("The array is a palindrome");
    else printf("The array is not a palindrome");
    return 0;
}
