/*Write a program and algorithm for Tower 
of Hanoi using Recursion.*/
#include <stdio.h> 
#include <conio.h> 
void towers(int n, char a, char c, char b); 
void main() 
{ 
    int n; 
    printf("Enter no. of disks: "); 
    scanf("%d", &n); 
    printf("\nThe sequence of moves are : \n"); 
    towers(n, 'A', 'C', 'B'); 
    getch(); 
} 
void towers(int n, char a, char c, char b) 
{ 
    if (n == 1) 
    { 
        printf("\nMove disk 1 from Rod %c to Rod %c", a, c); 
        return; 
    } 
    else 
    { 
        towers(n - 1, a, b, c); 
        printf("\nMove disk %d from Rod %c to Rod %c", n, a, c); 
        towers(n - 1, b, c, a); 
    } 
}