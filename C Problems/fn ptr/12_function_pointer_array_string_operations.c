#include <stdio.h>
#include <string.h>
void reverse(char s[]) {
    int i, j;
    char t;
    j = strlen(s) - 1;
    for (i = 0; i < j; i++, j--) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}
void upper(char s[]) {
    int i;
    for (i = 0; s[i]; i++) if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
}
void vowels(char s[]) {
    int i, c = 0;
    for (i = 0; s[i]; i++) if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') c++;
    printf("Vowels = %d", c);
}
int main() {
    char s[100];
    int ch;
    void(*op[3])(char[]);
    op[0] = reverse;
    op[1] = upper;
    op[2] = vowels;
    printf("Enter string: ");
    scanf(" %99[^\n]", s);
    printf("1 Reverse 2 Uppercase 3 Count vowels: ");
    scanf("%d", &ch);
    if (ch >= 1 && ch <= 3) op[ch - 1](s);
    if (ch == 1 || ch == 2) printf("Result = %s", s);
    return 0;
}
