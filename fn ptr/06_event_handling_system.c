#include <stdio.h>
void button() {
    printf("Button event handled");
}
void sensor() {
    printf("Sensor event handled");
}
int main() {
    void(*event[2])();
    int ch;
    event[0] = button;
    event[1] = sensor;
    printf("0 Button 1 Sensor: ");
    scanf("%d", &ch);
    if (ch >= 0 && ch < 2) event[ch]();
    else printf("Invalid event");
    return 0;
}
