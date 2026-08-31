#include <stdio.h>
void reverse(char * s, int n) {
    int i;
    char t;
    for (i = 0; i < n / 2; i++) {
        t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
}
int main() {
    int n, temp, neg = 0, i = 0;
    char s[50];
    printf("Enter integer: ");
    scanf("%d", &n);
    if (n < 0) {
        neg = 1;
        n = -n;
    }
    if (n == 0) s[i++] = '0';
    while (n) {
        s[i++] = n % 10 + '0';
        n /= 10;
    }
    if (neg) s[i++] = '-';
    s[i] = '\0';
    reverse(s, i);
    printf("%s", s);
    return 0;
}
