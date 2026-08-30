#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

void update(struct Student *p)
{
    printf("Enter new marks: ");
    scanf("%f", &p->marks);
}

int main()
{
    struct Student *p;

    p = (struct Student *)malloc(sizeof(struct Student));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter name: ");
    scanf(" %49[^\n]", p->name);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    update(p);

    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Marks: %.2f", p->marks);

    free(p);

    return 0;
}
