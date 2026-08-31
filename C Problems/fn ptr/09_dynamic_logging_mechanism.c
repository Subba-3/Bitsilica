#include <stdio.h>
void consoleLog(char s[]) {
    printf("Console: %s", s);
}
void fileLog(char s[]) {
    FILE * f = fopen("log.txt", "a");
    if (f) {
        fprintf(f, "%s\n", s);
        fclose(f);
        printf("Written to file");
    }
}
void networkLog(char s[]) {
    printf("Network: %s", s);
}
int main() {
    char s[100];
    int ch;
    void(*log)(char[]);
    printf("Enter message: ");
    scanf(" %99[^\n]", s);
    printf("1 Console 2 File 3 Network: ");
    scanf("%d", &ch);
    if (ch == 1) log = consoleLog;
    else if (ch == 2) log = fileLog;
    else log = networkLog;
    log(s);
    return 0;
}
