#include <stdio.h>
#include <stdlib.h>
int main() {
    void * a, *b, *c, *d;
    int s1, s2, s3, s4;
    printf("Enter four block sizes: ");
    scanf("%d%d%d%d", &s1, &s2, &s3, &s4);
    a = malloc(s1);
    b = malloc(s2);
    c = malloc(s3);
    free(b);
    d = malloc(s4);
    printf("Blocks allocated: %p %p %p %p", a, b, c, d);
    free(a);
    free(c);
    free(d);
    return 0;
}
