//  to input the information of 50 employees such as employee ID ,name, age, salary, department and display the name whose age is between 40 to 5 years

#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    int age;
    float salary;
    char department[100];
};

int main()
{
    struct Employee employees[50];
    for (int i = 0; i < 50; i++)
    {
        printf("Enter information for employee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter age: ");
        scanf("%d", &employees[i].age);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
        printf("Enter department: ");
        scanf("%s", employees[i].department);
    }
    printf("Employees with age between 40 and 50:\n");
    for (int i = 0; i < 50; i++)
    {
        if (employees[i].age >= 40 && employees[i].age <= 50)
        {
            printf("Employee %d:\n", i + 1);
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Department: %s\n", employees[i].department);
        }
    }
    return 0;
}
