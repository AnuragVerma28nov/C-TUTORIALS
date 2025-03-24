// MULTIPILICATION OF TWO NUMBERS

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, mul;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    mul = a * b;
    printf("Multipilication of a & b = %d", mul);

    getch();
}