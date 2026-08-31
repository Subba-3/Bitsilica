#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    int age;
};

int main()
{
    struct Student *student;

    student = malloc(sizeof(struct Student));

    if (student == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &student->roll);

    printf("Enter age: ");
    scanf("%d", &student->age);

    printf("Roll = %d\n", student->roll);
    printf("Age = %d\n", student->age);

    free(student);

    return 0;
}
