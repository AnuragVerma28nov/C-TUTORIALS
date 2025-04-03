// print massage

#include <stdio.h>

int main()
{
    char ch;
    do
    {
        printf("Welcome to C Programming!\n");
        printf("To continue press N!\n");
        scanf("%c", &ch);
        fflush(stdin);
    } while (ch == 'N');
    printf("Bye");
    return 0;
}