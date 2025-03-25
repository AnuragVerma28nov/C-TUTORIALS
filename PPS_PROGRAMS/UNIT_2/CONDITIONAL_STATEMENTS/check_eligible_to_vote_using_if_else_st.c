// TO CHECK THE PERSON ELIGIBLE TO VOTE OR NOT

#include <stdio.h>
#include <conio.h>

void main()
{
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Yes! you are able to vote!");
    }

    else
    {
        printf("No!, you are not able to vote");
    }

    getch();
}