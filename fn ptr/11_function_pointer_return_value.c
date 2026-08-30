#include <stdio.h>
#include <string.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int(*getOperation(char s[]))(int, int) {
    if (strcmp(s, "add") == 0) return add;
    if (strcmp(s, "subtract") == 0) return sub;
    return mul;
}
int main() {
    char s[20];
    int a, b;
    int(*op)(int, int);
    printf("Enter add/subtract/multiply: ");
    scanf("%19s", s);
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    op = getOperation(s);
    printf("Result = %d", op(a, b));
    return 0;
}
