/*Write a program for Deletion of an
element in array: at last*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, arr[100], ub, size = 100, ch;
    printf("Enter number of elements : ");
    scanf("%d", &ub);
    printf("\n");
    if (ub > size)
        printf("Underflow");
    else
    {
        for (i = 0; i < ub; i++)
        {
            printf("Enter %d element : ", (i + 1));
            scanf("%d", &arr[i]);
        }
        ub = ub - 1;
        printf("\nArray : ");
        for (i = 0; i < ub; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    getch();
}