#include <stdio.h>
void timer() {
    printf("Timer interrupt handled");
}
void keyboard() {
    printf("Keyboard interrupt handled");
}
void error() {
    printf("Error interrupt handled");
}
int main() {
    void(*handler[3])();
    int n;
    handler[0] = timer;
    handler[1] = keyboard;
    handler[2] = error;
    printf("0 Timer 1 Keyboard 2 Error: ");
    scanf("%d", &n);
    if (n >= 0 && n < 3) handler[n]();
    else printf("Invalid interrupt");
    return 0;
}
