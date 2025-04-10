#include <stdio.h>
#include <conio.h>
void table(int n);
int main()
{
  int n;
  printf("enter a number:");
  scanf("%d", &n);
  table(n); // actual parameter or argument
  return 0;
}
void table(int n)
{ // formal parameter
  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n", i * n);
  }
}