// sum of fibonacci series n term easy

#include <stdio.h>
#include<conio.h>

void main()
{
    int n, a = 0, b = 1, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum += a;
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\nSum of Fibonacci Series: %d\n", sum);
    getch();
}