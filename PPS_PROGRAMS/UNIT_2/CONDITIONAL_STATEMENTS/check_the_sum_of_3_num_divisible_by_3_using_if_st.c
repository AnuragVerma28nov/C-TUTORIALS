// TO CHECK THE SUM OF THREE NUMBER IS DIVISIBLE BY 3

#include <stdio.h>
#include <conio.h>

void main()
{
  int a, b, c, sum;

  printf("enter value of a,b,c: ");
  scanf("%d%d%d", &a, &b, &c);

  sum = a + b + c;

  if (sum % 3 == 0)
  {
    printf("%d is divisible by 3.", sum);
  }

  if (sum % 3 != 0)
  {
    printf("%d is not divisible by 3.", sum);
  }

  getch();
}