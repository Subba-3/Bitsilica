#include <stdio.h>

struct Student
{
    int type;

    union
    {
        int roll_number;
        char id[10];
    } data;
};

int main()
{
    struct Student student;

    printf("1. Integer roll number\n");
    printf("2. Character ID\n");
    printf("Enter type: ");
    scanf("%d", &student.type);

    if (student.type == 1)
    {
        printf("Enter roll number: ");
        scanf("%d", &student.data.roll_number);

        printf("Roll number = %d\n", student.data.roll_number);
    }
    else
    {
        printf("Enter ID: ");
        scanf("%9s", student.data.id);

        printf("ID = %s\n", student.data.id);
    }

    return 0;
}
