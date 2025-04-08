// CALCULATE AREA OF RECTANGLE,SQUARE ,CIRCLE USING FUNCTION
#include <stdio.h>
#include <conio.h>
#include <math.h>
float squarearea(float s);
float rectanglearea(float a, float b);
float circlearea(float r);
int main()
{
    float s, a, b, r;
    printf("enter side of square:\n");
    scanf("%f", &s);
    printf("enter side of rectangle:\n");
    scanf("%f%f", &a, &b);
    printf("enter radius of circle:\n");
    scanf("%f", &r);
    printf("area of square: %f\n", squarearea(s));
    printf("area of rectangle: %f\n", rectanglearea(a, b));
    printf("area of circle: %f\n", circlearea(r));
    return 0;
}
float squarearea(float s)
{
    return s * s;
}
float rectanglearea(float a, float b)
{
    return a * b;
}
float circlearea(float r)
{
    return 3.14 * r * r;
}