// To print the information of student such as roll number ,name, percentage  and display it

#include <stdio.h>

struct Student
{
    int roll_number;
    char name[100];
    float percentage;
};

int main()
{
    struct Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter percentage: ");
    scanf("%f", &student.percentage);
    printf("Student Information:\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);
    printf("Percentage: %.2f\n", student.percentage);
    return 0;
}
