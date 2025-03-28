// area & circumference of a circle and area & perimeter of a rectangle using switch case

#include <stdio.h>

int main()
{
    int choice;
    float radius, length, breadth;

    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        printf("Area of circle: %.2f\n", 3.14 * radius * radius);
        printf("Circumference of circle: %.2f\n", 2 * 3.14 * radius);
        break;

    case 2:
        printf("Enter length of rectangle: ");
        scanf("%f", &length);
        printf("Enter breadth of rectangle: ");
        scanf("%f", &breadth);
        printf("Area of rectangle: %.2f\n", length * breadth);
        printf("Perimeter of rectangle: %.2f\n", 2 * (length + breadth));
        break;
        
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
