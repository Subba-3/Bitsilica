#include <stdio.h>
int main() {
    unsigned int n, temp;
    int pos = -1;
    printf("Enter number: ");
    scanf("%u", &n);
    temp = n;
    while (temp) {
        pos++;
        temp = temp >> 1;
    }
    if (pos == - 1) printf("No set bit");
    else printf("Highest set bit position: %d", pos);
    return 0;
}
