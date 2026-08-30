#include <stdio.h>
int twice(int x) {
    return x * 2;
}
int inc(int x) {
    return x + 1;
}
int square(int x) {
    return x * x;
}
int main() {
    int x, i;
    int(*op[3])(int);
    op[0] = twice;
    op[1] = inc;
    op[2] = square;
    printf("Enter number: ");
    scanf("%d", &x);
    for (i = 0; i < 3; i++) x = op[i](x);
    printf("Result = %d", x);
    return 0;
}
