#include <stdio.h>
#include <stdlib.h>
int main() {
    char * p;
    int size = 1, count = 0;
    char ch;
    printf("Enter characters, end with #:\n");
    p = malloc(size);
    if (p == NULL) return 0;
    while (1) {
        scanf("%c", &ch);
        if (ch == '#') break;
        if (ch == '\n') continue;
        p = realloc(p, count + 2);
        p[count] = ch;
        count++;
    }
    p[count] = '\0';
    printf("String: %s", p);
    free(p);
    return 0;
}
