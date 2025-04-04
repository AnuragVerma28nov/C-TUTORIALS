// Reverse of the number entered by user

#include <stdio.h>

int main()
{
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    printf("Reverse of the number: %d\n", reverse);
    return 0;
}