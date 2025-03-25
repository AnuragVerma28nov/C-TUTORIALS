// CHECK THE NUMBER IS GREATER THAN 15

#include <stdio.h>
#include <conio.h>

void main()
{
  int a;

  printf("enter value of a: ");
  scanf("%d", &a);

  if (a > 15)
  {
    printf("%d is greater than 15", a);
  }

  if (a < 15)
  {
    printf("%d is less than 15", a);
  }

  getch();
}