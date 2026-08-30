#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person {
    char name[30];
    int age;
}
;
int byName(const void * a, const void * b) {
    struct Person * p = (struct Person * ) a, *q = (struct Person * ) b;
    return strcmp(p->name, q->name);
}
int byAge(const void * a, const void * b) {
    struct Person * p = (struct Person * ) a, *q = (struct Person * ) b;
    return p->age - q->age;
}
int main() {
    struct Person p[20];
    int n, i, ch;
    int(*cmp)(const void * , const void * );
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%29s%d", p[i].name, &p[i].age);
    printf("1 Name 2 Age: ");
    scanf("%d", &ch);
    if (ch == 1) cmp = byName;
    else cmp = byAge;
    qsort(p, n, sizeof(struct Person), cmp);
    for (i = 0; i < n; i++) printf("%s %d\n", p[i].name, p[i].age);
    return 0;
}
