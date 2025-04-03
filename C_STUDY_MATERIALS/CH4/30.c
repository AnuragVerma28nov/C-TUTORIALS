 //TO PRINT SUM OF FRIST N NATURAL NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("input a number:");
    scanf("%d",&n);
    for (i=0 ; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
 getch();
}