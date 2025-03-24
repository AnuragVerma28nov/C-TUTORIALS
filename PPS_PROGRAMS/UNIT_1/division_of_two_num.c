// DIVISION OF TWO NUMBERS

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, div;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    div = a / b;
    printf("Divivsion of a & b (quoitent) = %d", div);

    getch();
}