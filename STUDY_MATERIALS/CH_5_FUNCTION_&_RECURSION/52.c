//  calculates the square root of a number

#include <stdio.h>
#include <math.h>

double square_root(double num)
{
    return sqrt(num);
}

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num < 0)
    {
        printf("Error: Square root of negative numbers is not a real number.\n");
    }
    else
    {
        double sqrt_num = square_root(num);
        printf("Square root of %.2f: %.2f\n", num, sqrt_num);
    }
    return 0;
}
