// TO CHECK  WHICH NUMBER IS GREATER

#include <stdio.h>
#include <conio.h>

void main()
{
  int a, b;

  printf("enter value of a: ");
  scanf("%d", &a);

  printf("enter value of b: ");
  scanf("%d", &b);

  if (a > b)
  {
    printf("%d is greater than %d", a, b);
  }

  if (a < b)
  {
    printf("%d is greater than %d", b, a);
  }

  getch();
}