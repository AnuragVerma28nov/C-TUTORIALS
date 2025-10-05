/*Write a program and algorithm for
Selection Sort.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void selectionSort(int Arr[], int x);

void main()
{
    int i, n, arr[50];
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d element : ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("\n\nOriginal Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
    printf("\b\b ");
    selectionSort(arr, n);
    printf("\n\nSorted Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
    printf("\b\b ");
    getch();
}
void selectionSort(int Arr[], int x)
{
    int i, min, j, temp;
    for (i = 0; i < x - 1; i++)
    {
        min = i;
        for (j = i + 1; j < x; j++)
        {
            if (Arr[j] < Arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = Arr[min];
            Arr[min] = Arr[i];
            Arr[i] = temp;
        }
    }
}