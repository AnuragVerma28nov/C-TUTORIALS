// sum of the first n natural numbers

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d numbers: %d\n", n, sum);
    getch();
}