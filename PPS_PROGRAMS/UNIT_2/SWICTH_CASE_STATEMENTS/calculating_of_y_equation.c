//calculates y based on the value of k using switch case

#include <stdio.h>
#include <math.h>

int main() {
    int k;
    float a, b, y;

    printf("Enter value of a: ");
    scanf("%f", &a); 

    printf("Enter value of b: ");
    scanf("%f", &b);
    
    printf("Enter value of k: ");
    scanf("%d", &k);

    switch (k) {
        case 1:
            y = a * a + b * b;
            break;
        case 2:
            y = sqrt(a + b);
            break;
        case 3:
            y = sqrt(a) + sqrt(b);
            break;
        default:
            y = a * a * a + b * b * b;
            break;
    }

    printf("Value of y: %.2f\n", y);

    return 0;
}
