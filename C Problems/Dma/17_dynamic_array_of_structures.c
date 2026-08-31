#include <stdio.h>
#include <stdlib.h>
struct Person {
    char name[30];
    int age;
}
;
int main() {
    struct Person * p;
    int n, i;
    printf("Enter number of people: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(struct Person));
    if (p == NULL) return 0;
    for (i = 0; i < n; i++) {
        printf("Enter name and age: ");
        scanf("%29s%d", p[i].name, &p[i].age);
    }
    for (i = 0; i < n; i++) printf("%s %d\n", p[i].name, p[i].age);
    free(p);
    return 0;
}
