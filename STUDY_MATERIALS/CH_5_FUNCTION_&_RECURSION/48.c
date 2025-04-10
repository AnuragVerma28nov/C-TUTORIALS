// Celsius to Fahrenheit

#include <stdio.h>

float fahr(float ctemp)
{
    return ctemp * (9.0 / 5.0) + 32;
}

int main()
{
    float ctemp, ftemp;

    printf("Enter temperature (Celsius): ");
    scanf("%f", &ctemp);

    ftemp = fahr(ctemp);

    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", ctemp, ftemp);

    return 0;
}