// sum of frist n natural numbers

#include <stdio.h>

int sum(int n)
{
    if (n == 1)
        return 1;
    int sumN1 = sum(n - 1);
    int sumN = sumN1 + n;
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int s = sum(n);
    printf("Sum of first %d natural numbers: %d\n", n, s);
    return 0;
}
