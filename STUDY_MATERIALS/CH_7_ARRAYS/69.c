// taking 3 prices and printing it with gst

#include <stdio.h>

int main()
{
    float pr[3];

    printf("Enter price_1: ");
    scanf("%f", &pr[0]);

    printf("Enter price_2: ");
    scanf("%f", &pr[1]);

    printf("Enter price_3: ");
    scanf("%f", &pr[2]);

    printf("Total price_1: %f\n", pr[0] + (0.18 * pr[0]));
    printf("Total price_2: %f\n", pr[1] + (0.18 * pr[1]));
    printf("Total price_3: %f\n", pr[2] + (0.18 * pr[2]));

    return 0;
}