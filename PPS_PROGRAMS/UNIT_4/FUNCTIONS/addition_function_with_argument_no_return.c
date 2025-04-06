// addition function with argument no return

#include <stdio.h>

void addition(int a, int b)
{
    int sum = a + b;
    printf("Addition: %d\n", sum);
}

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    addition(num1, num2);
    return 0;
}
