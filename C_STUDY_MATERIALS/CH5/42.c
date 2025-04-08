// TO PRINT FINAL PRICE OF A PRODUCT
#include <stdio.h>
#include <conio.h>
void calprice(float price);
int main()
{
    float price;
    printf("enter price:");
    scanf("%f", &price);
    calprice(price);
    printf("the price is:%f", price);
    return 0;
}
void calprice(float price)
{
    price = price + (0.18 * price);
    printf("final price:%f\n", price);
}