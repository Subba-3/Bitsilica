#include <stdio.h>
int even(int x) {
    return x % 2 == 0;
}
int positive(int x) {
    return x > 0;
}
int prime(int x) {
    int i;
    if (x < 2) return 0;
    for (i = 2; i < x; i++) if (x % i == 0) return 0;
    return 1;
}
int find(int a[], int n, int(*condition)(int)) {
    int i;
    for (i = 0; i < n; i++) if (condition(a[i])) return a[i];
    return-1;
}
int main() {
    int a[50], n, i, ch, r;
    int(*condition)(int);
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("1 Even 2 Positive 3 Prime: ");
    scanf("%d", &ch);
    if (ch == 1) condition = even;
    else if (ch == 2) condition = positive;
    else condition = prime;
    r = find(a, n, condition);
    if (r == - 1) printf("No matching element");
    else printf("First matching element = %d", r);
    return 0;
}
