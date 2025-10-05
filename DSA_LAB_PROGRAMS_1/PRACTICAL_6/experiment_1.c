/*Program and algorithm for factorial 
of a number using recursion.*/
#include <stdio.h> 
#include <conio.h> 
 
int fact(int); 
 
void main() 
{ 
    int num, f; 
    printf("\nEnter any number to find it's Factorial : "); 
    scanf("%d", &num); 
    f = fact(num); 
    printf("\n\nFactorial of %d is %d\n", num, f); 
    getch(); 
} 
int fact(int n) 
{ 
    if (n == 0 || n == 1) 
    { 
        return 1; 
    } 
    return n * fact(n - 1); 
}