#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
int main()
{
    int a, b, s;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    s = sum(a, b);
    printf("sum:%d \n", s);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}