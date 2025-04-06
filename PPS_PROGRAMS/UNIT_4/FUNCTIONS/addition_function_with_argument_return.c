// addition function with argument return

#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int sum = addition(num1, num2);
    printf("Addition: %d\n", sum);
    return 0;
}
