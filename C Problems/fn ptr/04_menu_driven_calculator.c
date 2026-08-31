#include <stdio.h>
int power(int a, int b) {
    int r = 1, i;
    for (i = 0; i < b; i++) r *= a;
    return r;
}
int mod(int a, int b) {
    return a % b;
}
int squareRoot(int a) {
    int i;
    for (i = 0; i * i <= a; i++) if (i * i == a) return i;
    return-1;
}
int main() {
    int a, b, ch;
    int(*op)(int, int);
    printf("1 Power 2 Modulo 3 SquareRoot: ");
    scanf("%d", &ch);
    if (ch == 3) {
        printf("Enter number: ");
        scanf("%d", &a);
        printf("Result = %d", squareRoot(a));
        return 0;
    }
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    if (ch == 1) op = power;
    else op = mod;
    if (ch == 2 && b == 0) printf("Cannot divide by zero");
    else printf("Result = %d", op(a, b));
    return 0;
}
