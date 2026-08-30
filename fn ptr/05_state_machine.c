#include <stdio.h>
void initState() {
    printf("Initial state");
}
void runState() {
    printf("Running state");
}
void stopState() {
    printf("Stopped state");
}
void errorState() {
    printf("Error state");
}
int main() {
    void(*state[4])();
    int ch;
    state[0] = initState;
    state[1] = runState;
    state[2] = stopState;
    state[3] = errorState;
    printf("0 Init 1 Run 2 Stop 3 Error: ");
    scanf("%d", &ch);
    if (ch >= 0 && ch < 4) state[ch]();
    else printf("Invalid state");
    return 0;
}
