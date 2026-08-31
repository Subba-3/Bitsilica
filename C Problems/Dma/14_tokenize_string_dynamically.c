#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s[300], *token, *words[50];
    int count = 0, i;
    printf("Enter sentence: ");
    scanf(" %299[^\n]", s);
    token = strtok(s, " ");
    while (token != NULL && count < 50) {
        words[count] = malloc(strlen(token) + 1);
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }
    for (i = 0; i < count; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    return 0;
}
