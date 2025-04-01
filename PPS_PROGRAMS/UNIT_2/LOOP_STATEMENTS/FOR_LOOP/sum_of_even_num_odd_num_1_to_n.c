// sum of even numbers and odd numbers from 1 to n

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int even_sum = 0, odd_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    getch();
}
