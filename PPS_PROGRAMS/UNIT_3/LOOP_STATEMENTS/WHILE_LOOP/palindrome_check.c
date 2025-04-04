// checking palindrome number

#include <stdio.h>

int main()
{
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    if (original == reverse)
    {
        printf("%d is a palindrome number.\n", original);
    }
    else
    {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}