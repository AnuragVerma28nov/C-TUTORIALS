// BITWISE OPERTION

#include <stdio.h>
#include <conio.h>

void main()
{
    int a;

    a = 18 & 20;
    printf("Bitwise AND: %d\n",a);

    a = 18 | 20;
    printf("Bitwise OR: %d\n",a);

    a = 18 ^ 20;
    printf("Bitwise X-OR: %d",a);

    getch();
}