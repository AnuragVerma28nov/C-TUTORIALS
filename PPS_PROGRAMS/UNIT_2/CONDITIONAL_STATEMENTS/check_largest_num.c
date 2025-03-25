// TO CHECK THE LARGEST NUMBER

#include <stdio.h>
#include <conio.h>

void main()
{
   int a, b, c;

   printf("enter value of a,b,c: ");
   scanf("%d%d%d", &a, &b, &c);

   if (a > b && a > c)
   {
      printf("%d is largest no..", a);
   } 

   else if (b > a && b > c)
   {
      printf("%d is largest no.", b);
   }

   else if (c > a && c > b)
   {
      printf("%d is largest no.", c);
   }

   else
   {
      printf("all are equal.", c);
   }
   
   getch();
}
