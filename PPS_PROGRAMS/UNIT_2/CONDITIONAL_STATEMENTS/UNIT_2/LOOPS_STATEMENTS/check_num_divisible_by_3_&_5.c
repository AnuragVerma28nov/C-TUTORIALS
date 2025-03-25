// TO CHECK THE NUMBER IS DIVISIBLE BY 3 & 5

#include <stdio.h>
#include <conio.h>

void main()
{
  int n;

  printf("enter n: ");
  scanf("%d", &n);

  if (n % 3 == 0 && n % 5 == 0)
  {
    printf("%d is divisible by 3 & 5.", n);
  }
  
  getch();
}