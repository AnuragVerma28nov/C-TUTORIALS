/*Write a program for Deletion of an
element in array: of any specific element */
#include <stdio.h>
#include <conio.h>
void main()
{
    system("CLS");
    int i, arr[100], ub, size = 100, del, loc;
    printf("Enter number of elements : ");
    scanf("%d", &ub);
    printf("\n");
    if (ub > size)
    {
        printf("Underflow");
    }
    else
    {
        for (i = 0; i < ub; i++)
        {
            printf("Enter %d element : ", (i + 1));
            scanf("%d", &arr[i]);
        }
        printf("\n Enter Element to be deleted : ");
        scanf("%d", &del);
        for (i = 0; i < ub; i++)
        {
            if (arr[i] == del)
            {
                loc = i;
                break;
            }
        }
        for (i = loc; i < ub; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("\nArray : ");
        for (i = 0; i < ub - 1; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    getch();
}
