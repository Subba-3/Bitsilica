#include <stdio.h>
#include <string.h>
int main() {
    char s[100], d[100];
    int n;
    printf("Enter source string: ");
    scanf(" %99[^\n]", s);
    printf("Enter number of characters: ");
    scanf("%d", &n);
    memmove(d, s, n);
    d[n] = '\0';
    printf("Result: %s", d);
    return 0;
}
