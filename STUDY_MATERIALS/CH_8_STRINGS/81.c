// inititalisation of arrays

#include <stdio.h>

int main()
{
    float pr[3] = {100.0, 200.0, 300.0};

    // or float pr[]={100.0,200.0,300.0};

    printf("Total price_1: %f\n", pr[0] + (0.18 * pr[0]));
    printf("Total price_2: %f\n", pr[1] + (0.18 * pr[1]));
    printf("Total price_3: %f\n", pr[2] + (0.18 * pr[2]));

    return 0;
}