//  printing odd num 1 to n

#include <stdio.h>
#include<conio.h>

void main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d:\n", n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }

    getch();
}