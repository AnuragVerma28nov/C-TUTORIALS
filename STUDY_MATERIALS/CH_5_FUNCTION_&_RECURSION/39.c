// MAKE TWO FUNCTION TO PRINT NAMASTE FOR INDIAN & BONJOUR FOR FRENCH
#include <stdio.h>
#include <conio.h>
void printNamaste();
void printBonjour();
int main()
{
    char x;
    printf("enter i for indian or f for french:");
    scanf("%c", &x);
    if (x == 'i' || x == 'I')
    {
        printNamaste();
    }
    if (x == 'f' || x == 'F')
    {
        printBonjour();
    }
    else
    {
        printf("wrong input");
    }
    return 0;
}
void printNamaste()
{
    printf("Namaste\n");
}
void printBonjour()
{
    printf("Bonjour\n");
}
