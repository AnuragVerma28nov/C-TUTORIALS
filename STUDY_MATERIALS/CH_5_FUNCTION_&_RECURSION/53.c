//  prints "HOT" or "COLD" based on the temperature entered by the user


#include <stdio.h>

void print(float temp) {
    if (temp > 30.0) {
        printf("%.2f°C is HOT\n", temp);
    } else if (temp < 15.0) {
        printf("%.2f°C is COLD\n", temp);
    } else {
        printf("%.2f°C is MODERATE\n", temp);
    }
}

int main() {
    float temp;
    printf("Enter temperature (°C): ");
    scanf("%f", &temp);
    print(temp);
    return 0;
}

