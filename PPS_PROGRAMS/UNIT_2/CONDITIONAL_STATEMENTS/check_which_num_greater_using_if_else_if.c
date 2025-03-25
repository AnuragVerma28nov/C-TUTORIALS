// TO CHECK WHICH NUMBER IS GREATER

#include <stdio.h>
#include <conio.h>

void main()

{
   int a, b;

   printf("enter value of a & b: ");
   scanf("%d%d", &a, &b);

   if (a > b)
   {
      printf("%d is greater than %d", a, b);
   }

   else if (a < b)
   {
      printf("%d is greater than %d.", b, a);
   }

   getch();
}
