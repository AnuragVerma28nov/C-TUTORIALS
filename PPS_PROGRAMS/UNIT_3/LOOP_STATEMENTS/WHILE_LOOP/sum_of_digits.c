//Sum of digits

#include <stdio.h>

    int
    main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}