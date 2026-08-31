#include <stdio.h>

struct Student
{
    int id;

    union
    {
        int marks;
        float percentage;
    };
};

int main()
{
    struct Student student;

    printf("Enter student id: ");
    scanf("%d", &student.id);

    printf("Enter marks: ");
    scanf("%d", &student.marks);

    printf("ID = %d\n", student.id);
    printf("Marks = %d\n", student.marks);

    printf("Enter percentage: ");
    scanf("%f", &student.percentage);

    printf("Percentage = %.2f\n", student.percentage);

    return 0;
}
