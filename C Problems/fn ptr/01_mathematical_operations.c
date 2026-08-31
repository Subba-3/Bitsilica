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
int divi(int a, int b) {
    return a / b;
}
int main() {
    int a, b, ch;
    int(*op)(int, int);
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("1 Add 2 Subtract 3 Multiply 4 Divide: ");
    scanf("%d", &ch);
    if (ch == 1) op = add;
    else if (ch == 2) op = sub;
    else if (ch == 3) op = mul;
    else op = divi;
    if (ch == 4 && b == 0) printf("Cannot divide by zero");
    else printf("Result = %d", op(a, b));
    return 0;
}
