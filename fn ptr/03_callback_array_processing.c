#include <stdio.h>
void doubleValue(int * x) {
    *x = *x * 2;
}
void addTen(int * x) {
    *x = *x + 10;
}
void process(int a[], int n, void(*fun)(int * )) {
    int i;
    for (i = 0; i < n; i++) fun(&a[i]);
}
int main() {
    int a[50], n, i, ch;
    void(*fun)(int * );
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("1 Double 2 Add 10: ");
    scanf("%d", &ch);
    if (ch == 1) fun = doubleValue;
    else fun = addTen;
    process(a, n, fun);
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
