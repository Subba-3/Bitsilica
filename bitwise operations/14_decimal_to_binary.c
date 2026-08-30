#include <stdio.h>
int main() {
    unsigned int n;
    int i, started = 0;
    printf("Enter decimal number: ");
    scanf("%u", &n);
    printf("Binary: ");
    for (i = 31; i >= 0; i--) {
        if ((n >> i) & 1) started = 1;
        if (started) printf("%u", (n >> i) & 1);
    }
    if (!started) printf("0");
    return 0;
}
