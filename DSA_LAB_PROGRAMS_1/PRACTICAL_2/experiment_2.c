/*Write a program for insertion of an
element in array: at beginning */
#include <stdio.h>
#include <conio.h>
void main()
{
    system("CLS");

    int i, arr[100], ub, size = 100, ch;
    printf("Enter number of elements : ");
    scanf("%d", &ub);
    if (ub > size)
    {
        printf("Overflow");
    }
    else
    {
        for (i = 0; i < ub; i++)
        {
            printf("Enter %d element : ", (i + 1));
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < ub - 1; i++)
            arr[i] = arr[i + 1];
        printf("\nArray : ");
        for (i = 0; i < ub - 1; i++)
            printf("%d\t", arr[i]);
    }
    getch();
}