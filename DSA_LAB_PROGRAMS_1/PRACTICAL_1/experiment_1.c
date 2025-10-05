/*Write a program to input element in array
and print all the elements.*/
#include <stdio.h>
#include <conio.h>
void main()
{
    system("CLS");
    int i, arr[50], ub;
    printf("Enter total number of elements : ");
    scanf("%d", &ub);
    printf("\n");
    for (i = 0; i < ub; i++)
    {
        printf("Enter %d elements : ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < ub; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();
}