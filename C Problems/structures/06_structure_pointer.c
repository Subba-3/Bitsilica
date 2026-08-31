#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    int marks;
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

    printf("Enter marks: ");
    scanf("%d", &student->marks);

    printf("Roll = %d\n", student->roll);
    printf("Marks = %d\n", student->marks);

    free(student);

    return 0;
}
