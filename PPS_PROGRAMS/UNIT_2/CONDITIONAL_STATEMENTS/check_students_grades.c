// TO PRINT GRADES OF STUDENTS

#include <stdio.h>
#include <conio.h>

void main()
{
    int marks;

    printf("Enter total marks (between 100): ");
    scanf("%d", &marks);

    printf("Marks = %d\n", marks);
    printf("Grade = ");

    if (marks >= 90)
    {
        printf("A\n");
    }

    else if (marks >= 80)
    {
        printf("B\n");
    }

    else if (marks >= 70)
    {
        printf("C\n");
    }

    else if (marks >= 60)
    {
        printf("D\n");
    }

    else if (marks >= 50)
    {
        printf("E\n");
    }
    
    else
    {
        printf("F\n");
    }

    getch();
}