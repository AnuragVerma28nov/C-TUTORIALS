// square root of sum of two numbers

#include <stdio.h>
#include <math.h>

int main()
{
   int x, y, sum;
   float sr;

   printf("enter value x: ");
   scanf("%d", &x);

   printf("enter value y: ");
   scanf("%d", &y);

   sum = x + y;
   sr = sqrt(sum);

   printf("Squareroot of %d is %f: ", sum, sr);
   return 0;
}
