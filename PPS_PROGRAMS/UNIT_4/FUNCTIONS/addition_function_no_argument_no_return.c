// addition function no argument no return

#include <stdio.h>

void addition()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Addition: %d\n", num1 + num2);
}

int main()
{
    addition();
    return 0;
}
