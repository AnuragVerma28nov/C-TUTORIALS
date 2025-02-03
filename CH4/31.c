//TABLE OF A NUMBER
#include<stdio.h>
int main()
{
    int n,i,m;
    printf("input a number:");
    scanf("%d",&n);
    for ( i = 1; i<=10; i++)
    {
       m=n*i;
       printf("%d\n",m);
    }
    
    
}