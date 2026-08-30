#include <stdio.h>
void bubble(int a[], int n) {
    int i, j, t;
    for (i = 0; i < n - 1; i++) for (j = 0; j < n - 1 - i; j++) if (a[j] > a[j + 1]) {
        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
    }
}
void selection(int a[], int n) {
    int i, j, m, t;
    for (i = 0; i < n - 1; i++) {
        m = i;
        for (j = i + 1; j < n; j++) if (a[j] < a[m]) m = j;
        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}
void insertion(int a[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main() {
    int a[50], n, i, ch;
    void(*sort)(int[], int);
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("1 Bubble 2 Selection 3 Insertion: ");
    scanf("%d", &ch);
    if (ch == 1) sort = bubble;
    else if (ch == 2) sort = selection;
    else sort = insertion;
    sort(a, n);
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
