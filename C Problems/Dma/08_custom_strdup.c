#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * my_strdup(char * s) {
    char * p;
    int i;
    p = malloc(strlen(s) + 1);
    if (p == NULL) return NULL;
    for (i = 0; s[i] != '\0'; i++) p[i] = s[i];
    p[i] = '\0';
    return p;
}
int main() {
    char s[200], *copy;
    printf("Enter string: ");
    scanf(" %199[^\n]", s);
    copy = my_strdup(s);
    if (copy == NULL) return 0;
    printf("Copied string: %s", copy);
    free(copy);
    return 0;
}
