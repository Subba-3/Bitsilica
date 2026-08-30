#include <stdio.h>
int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n, ch, r;
    int(*f)(int);
    printf("1 Factorial 2 Fibonacci: ");
    scanf("%d", &ch);
    printf("Enter number: ");
    scanf("%d", &n);
    if (ch == 1) f = fact;
    else f = fib;
    r = f(n);
    printf("Result = %d", r);
    return 0;
}
