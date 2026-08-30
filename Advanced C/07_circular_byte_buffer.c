#include <stdio.h>
int main() {
    char b[20], ch;
    int size, head = 0, tail = 0, count = 0, n, i;
    printf("Enter buffer size: ");
    scanf("%d", &size);
    printf("Enter number of bytes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c", &ch);
        if (count < size) {
            b[tail] = ch;
            tail = (tail + 1) % size;
            count++;
        } else {
            b[tail] = ch;
            tail = (tail + 1) % size;
            head = (head + 1) % size;
        }
    }
    printf("Buffer: ");
    for (i = 0; i < count; i++) printf("%c ", b[(head + i) % size]);
    return 0;
}
