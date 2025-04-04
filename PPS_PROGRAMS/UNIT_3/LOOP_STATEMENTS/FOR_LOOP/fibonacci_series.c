// fibonaccci series

#include <stdio.h>
#include<conio.h>

void main()
{
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", a);
        }
        else if (i == 2)
        {
            printf("%d ", b);
        }
        else
        {
            next = a + b;
            a = b;
            b = next;
            printf("%d ", next);
        }
    }
    getch();
}
