#include <stdio.h>
int ia(int a, int b) {
    return a + b;
}
int is(int a, int b) {
    return a - b;
}
float fa(float a, float b) {
    return a + b;
}
float fs(float a, float b) {
    return a - b;
}
int main() {
    int type, op, a, b;
    float x, y;
    printf("1 Integer 2 Float: ");
    scanf("%d", &type);
    printf("1 Add 2 Subtract: ");
    scanf("%d", &op);
    if (type == 1) {
        int(*f[2])(int, int) = {
            ia, is
        }
        ;
        printf("Enter two integers: ");
        scanf("%d%d", &a, &b);
        printf("Result = %d", f[op - 1](a, b));
    } else {
        float(*f[2])(float, float) = {
            fa, fs
        }
        ;
        printf("Enter two floats: ");
        scanf("%f%f", &x, &y);
        printf("Result = %.2f", f[op - 1](x, y));
    }
    return 0;
}
