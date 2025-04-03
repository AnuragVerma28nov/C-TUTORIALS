//TO CHECK A NUMBER EVEN--->1 OR ODD --->0
#include<stdio.h>
#include<math.h>
int main()
{
 int a;
 printf("enter a:");
 scanf("%d", &a);
 printf("%d", a%2 == 0);
 return 0;
}