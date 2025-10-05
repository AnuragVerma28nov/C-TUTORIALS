/*Write a program and algorithm for Binary 
Search.*/
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
void main() 
{ 
    system("CLS"); 
    int i, j, n, s, temp, f = 0; 
    printf("Enter size of array : "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("Enter %d element : ", i + 1); 
        scanf("%d", &arr[i]); 
    } 
    printf("\nEnter the element to search : "); 
    scanf("%d", &s); 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < n - i - 1; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            { 
                temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
    printf("\nArray : "); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d , ", arr[i]); 
    } 
    printf("\b\b "); 
    int low = 0; 
    int high = n - 1; 
    int mid = (low + high) / 2; 
    while (low != high) 
    { 
        if (arr[mid] == s) 
        { 
            f = 1; 
            break; 
        } 
        else if (s < arr[mid]) 
        { 
            high = mid - 1; 
        } 
        else 
        { 
            low = mid + 1;
        } 
        mid = (low + high) / 2; 
    } 
    if (f) 
    { 
        printf("\nElement found"); 
    } 
    else 
    { 
        printf("\nElement not Found"); 
    } 
    getch(); 
} 
