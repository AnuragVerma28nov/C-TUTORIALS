// sum of the first n natural numbers can be calculated using the formula: 1 + 2 + 3 + ... + n = n(n+1)/2

#include <stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("Sum of first %d numbers: %d\n", n, sum);
    getch();
}
