// MODULOUS OF TWO NUMBERS

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, div;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    div = a % b;
    printf("Modulous of a & b = %d", div);

    getch();
}