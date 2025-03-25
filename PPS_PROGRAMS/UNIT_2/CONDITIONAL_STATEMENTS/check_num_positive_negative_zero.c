// TO  CHECK THE ENTERED NUMBER IS POSITIVE OR NEGATIVE OR ZERO

#include <stdio.h>
#include <conio.h>

void main()
{
   int n;

   printf("enter value of n: ");
   scanf("%d", &n);

   if (n > 0)
   {
      printf("%d is positive no.", n);
   }

   else if (n < 0)
   {
      printf("%d is negative no.", n);
   }

   else
   {
      printf("%d is equal to 0.", n);
   }
   
   getch();
}