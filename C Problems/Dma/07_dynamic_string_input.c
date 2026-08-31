#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char input[200], *p;
    printf("Enter string: ");
    scanf(" %199[^\n]", input);
    p = malloc((strlen(input) + 1) * sizeof(char));
    if (p == NULL) return 0;
    strcpy(p, input);
    printf("Copied string: %s", p);
    free(p);
    return 0;
}
