// armstrong check log(n)+1

#include <stdio.h>
#include <math.h>

int main() {
    int n, r, sum = 0, d, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    d = (int)log10(n+1);
    while (temp > 0) {
        r = temp % 10;
        sum = sum + (int)pow(r, d); 
        temp /= 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
