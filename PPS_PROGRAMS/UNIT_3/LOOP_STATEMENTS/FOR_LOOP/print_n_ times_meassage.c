// print n times meassage

#include <stdio.h>
#include<conio.h>

void main()
{
    int n, i;

    printf("Enter number of times n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Hello World\n");
    }

    getch();
}
