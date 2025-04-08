// PRINT HELLO WORLD FIVE TIMES
#include <stdio.h>
#include <conio.h>
void printHW(int n);
int main()
{
    printHW(5);
    return 0;
}
// recurcive function
void printHW(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("hello world\n");
    printHW(n - 1);
}