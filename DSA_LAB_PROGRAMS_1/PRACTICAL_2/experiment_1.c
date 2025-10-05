/*program for insertion of an
element in array: at last*/
#include <stdio.h>
#include <conio.h>
void main()
{
    system("CLS");

    int i, arr[10], size = 10, ub, data;
    printf("Enter number of elements : ");
    scanf("%d", &ub);
    if (ub >= size)
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
        printf("\nEnter element to insert at last : ");
        scanf("%d", &data);
        arr[ub] = data;
        printf("\nArray = ");
        for (i = 0; i <= ub; i++)
            printf("%d\t", arr[i]);
    }
    getch();
}