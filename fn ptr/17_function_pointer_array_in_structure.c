#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
struct Calculator {
    int(*op[3])(int, int);
}
;
int main() {
    struct Calculator c;
    int a, b, ch;
    c.op[0] = add;
    c.op[1] = sub;
    c.op[2] = mul;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("1 Add 2 Subtract 3 Multiply: ");
    scanf("%d", &ch);
    if (ch >= 1 && ch <= 3) printf("Result = %d", c.op[ch - 1](a, b));
    return 0;
}
