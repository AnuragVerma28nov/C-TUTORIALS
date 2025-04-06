// addition function no argument return

#include <stdio.h>

int addition()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    return num1 + num2;
}

int main()
{
    int sum = addition();
    printf("Addition: %d\n", sum);
    return 0;
}
