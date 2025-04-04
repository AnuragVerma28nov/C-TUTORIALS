// To input the information of 50 Student in class some information such as name, father name, date of birth  and display it

#include <stdio.h>

struct Student
{
    char name[100];
    char father_name[100];
    char date_of_birth[100];
};

int main()
{
    struct Student students[50];
    for (int i = 0; i < 50; i++)
    {
        printf("Enter information for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter father's name: ");
        scanf("%s", students[i].father_name);
        printf("Enter date of birth: ");
        scanf("%s", students[i].date_of_birth);
    }
    printf("Student Class Information:\n");
    for (int i = 0; i < 50; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Father's Name: %s\n", students[i].father_name);
        printf("Date of Birth: %s\n", students[i].date_of_birth);
    }
    return 0;
}
