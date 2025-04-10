//  sum of digits of a number using recursion

#include <stdio.h>
int sd(int num)
{
    if (num == 0)
        return 0;
    else
        return (num % 10) + sd(num / 10);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sd(num));
    return 0;
}
