// calculates the sum, product, and average of two numbers using call by reference

#include <stdio.h>

void calculate_sum_pro_avg(int num1, int num2, int *sum, int *pro, float *avg)
{
    *sum = num1 + num2;
    *pro = num1 * num2;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int num1, num2, sum, pro;
    float avg;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    calculate_sum_pro_avg(num1, num2, &sum, &pro, &avg);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", pro);
    printf("Average: %.2f\n", avg);

    return 0;
}
