#include <stdio.h>

typedef int (*Operation)(int, int);

struct Calculator
{
    Operation operation;
};

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    struct Calculator calculator;
    int a;
    int b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n");
    printf("2. Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        calculator.operation = add;
    }
    else
    {
        calculator.operation = multiply;
    }

    printf("Result = %d\n", calculator.operation(a, b));

    return 0;
}
