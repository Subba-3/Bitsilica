#include <stdio.h>
void c1() {
    printf("Command 1 executed");
}
void c2() {
    printf("Command 2 executed");
}
void c3() {
    printf("Command 3 executed");
}
int main() {
    void(*cmd[3])();
    int n;
    cmd[0] = c1;
    cmd[1] = c2;
    cmd[2] = c3;
    printf("Enter command 1-3: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 3) cmd[n - 1]();
    else printf("Invalid command");
    return 0;
}
