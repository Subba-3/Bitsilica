#include <stdio.h>

struct Address
{
    int house_number;
    int pincode;
};

struct Student
{
    int roll;
    char name[50];
    struct Address address;
    int marks[3];
};

int main()
{
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter name: ");
    scanf("%49s", student.name);

    printf("Enter house number: ");
    scanf("%d", &student.address.house_number);

    printf("Enter pincode: ");
    scanf("%d", &student.address.pincode);

    printf("Enter three marks:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &student.marks[i]);
    }

    printf("Roll = %d\n", student.roll);
    printf("Name = %s\n", student.name);
    printf("House number = %d\n", student.address.house_number);
    printf("Pincode = %d\n", student.address.pincode);

    return 0;
}
