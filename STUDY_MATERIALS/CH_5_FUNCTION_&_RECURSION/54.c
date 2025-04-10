//  a pow function in C

#include <stdio.h>

double my_pow(double base, int expo)
{
    double r = 1.0;
    if (expo == 0)
    {
        return 1;
    }
    else if (expo < 0)
    {
        base = 1 / base;
        expo = -expo;
    }
    for (int i = 0; i < expo; i++)
    {
        r *= base;
    }
    return r;
}

int main()
{
    double base;
    int expo;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    double result = my_pow(base, expo);
    printf("%.2f^%d = %.2f\n", base, expo, result);
    return 0;
}
