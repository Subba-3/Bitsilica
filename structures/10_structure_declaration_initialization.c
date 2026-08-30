#include <stdio.h>

typedef struct
{
    int id;
    float marks;
} Student;

int main()
{
    Student student = {0};

    printf("Enter id: ");
    scanf("%d", &student.id);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("ID = %d\n", student.id);
    printf("Marks = %.2f\n", student.marks);

    return 0;
}
