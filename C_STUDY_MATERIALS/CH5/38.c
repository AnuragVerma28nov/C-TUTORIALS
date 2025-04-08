#include <stdio.h>
void printHello();
void printBye();
int main()
{
    printHello();
    printBye();
    return 0;
}
void printHello()
{
    printf("hello!\n");
}
void printBye()
{
    printf("bye");
}