#include <stdio.h>

struct Student
{
    int roll;
    int marks;
};

void display(struct Student student)
{
    printf("Roll = %d\n", student.roll);
    printf("Marks = %d\n", student.marks);
}

void update(struct Student *student)
{
    printf("Enter new marks: ");
    scanf("%d", &student->marks);
}

struct Student create_student()
{
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks: ");
    scanf("%d", &student.marks);

    return student;
}

int main()
{
    struct Student student;

    student = create_student();

    display(student);

    update(&student);

    display(student);

    return 0;
}
