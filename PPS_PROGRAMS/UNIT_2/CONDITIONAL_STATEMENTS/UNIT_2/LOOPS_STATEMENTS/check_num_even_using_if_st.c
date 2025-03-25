// TO CHECK THE ENTERED NUMBER IS EVEN

#include <stdio.h>
#include <conio.h>

void main()
{
  int a;

  printf("enter value of a: ");
  scanf("%d", &a);

  if (a % 2 == 0)
  {
    printf("%d is a even no.", a);
  }

  getch();
}