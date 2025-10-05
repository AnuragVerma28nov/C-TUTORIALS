/*Write a program for insertion of an
element in array: at any specific position */
#include <stdio.h>
#include <conio.h>
void main()
{
    system("CLS");
    printf("\n");
    int i, arr[10], size = 10, ub, data, loc;
    printf("Enter number of elements : ");
    scanf("%d", &ub);
    if (ub >= size)
    {
        printf("Overflow");
    }
    else
    {
        printf("\n");
        for (i = 0; i < ub; i++)
        {
            printf("Enter %d element : ", (i + 1));
            scanf("%d", &arr[i]);
        }
        printf("\nEnter location of new element : ");
        scanf("%d", &loc);
        printf("\nEnter element to be inserted : ");
        scanf("%d", &data);
        for (i = ub - 1; i >= loc - 1; i--)

        {
            arr[i + 1] = arr[i];
        }
        arr[loc - 1] = data;
        printf("\nArray = ");
        for (i = 0; i <= ub; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    getch();
}