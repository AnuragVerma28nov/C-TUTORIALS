// Calculating percentage of three subjects

#include <stdio.h>

float cal_per(float s1, float s2, float s3)
{
    return (((s1 + s2 + s3) / 300.0) * 100.0);
}

int main()
{
    float s1, s2, s3;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    float percentage = cal_per(s1, s2, s3);

    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
