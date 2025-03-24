// SUBTRACTION OF TWO NUMBERS

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, sub;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    sub = a - b;
    printf("Subtracttion of a & b = %d", sub);

    getch();
}