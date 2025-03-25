// PERCENTAGE CALCULATION

#include <stdio.h>

int main()
{
    float S1, S2, S3, S4, S5, OM, T = 500, PER;

    printf("enter marks of five subjects(100).\n");
    
    printf("enter marks of S1: ");
    scanf("%f", &S1);

    printf("enter marks of S2: ");
    scanf("%f", &S2);

    printf("enter marks of S3: ");
    scanf("%f", &S3);

    printf("enter marks of S4: ");
    scanf("%f", &S4);

    printf("enter marks of S5: ");
    scanf("%f", &S5);

    OM = S1 + S2 + S3 + S4 + S5;

    printf("Total marks is:%f \n", OM);

    PER = (OM / T) * 100;

    printf("Percentage is %f", PER);

    return 0;
}