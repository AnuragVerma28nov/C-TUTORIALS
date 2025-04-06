// swap using call by value

#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Values inside swap function: a = %d, b = %d\n", a, b);
}

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Values before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("Values after swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}