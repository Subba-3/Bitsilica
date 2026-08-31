#include <stdio.h>

struct Employee
{
    int type;

    union
    {
        float monthly_salary;
        float hourly_wage;
    } pay;
};

int main()
{
    struct Employee employee;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("1. Monthly salary\n");
        printf("2. Hourly wage\n");
        printf("Enter type: ");
        scanf("%d", &employee.type);

        if (employee.type == 1)
        {
            printf("Enter monthly salary: ");
            scanf("%f", &employee.pay.monthly_salary);

            printf("Monthly salary = %.2f\n", employee.pay.monthly_salary);
        }
        else
        {
            printf("Enter hourly wage: ");
            scanf("%f", &employee.pay.hourly_wage);

            printf("Hourly wage = %.2f\n", employee.pay.hourly_wage);
        }
    }

    return 0;
}
