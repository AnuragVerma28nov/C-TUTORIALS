/*Write a program and algorithm for
insertion, traversing and deletion in Queue.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int queue[100];
    int num, ch, i;
    int FIRST = -1, LAST = -1;
    while (1)
    {
        system("CLS");
        printf("\nOperation on Queue :");
        printf("\n1-Add Element");
        printf("\n2-Delete Element");
        printf("\n3-Dispaly Queue");
        printf("\n4-Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter number to add : ");
            scanf("%d", &num);
            if (LAST == 99)
            {
                printf("\nQueue Overflow");
            }
            else
            {
                if (FIRST == -1)
                {
                    FIRST++;
                    LAST++;
                }
                else
                {
                    LAST++;
                }
                queue[LAST] = num;
            }
            printf("\nElement Added Successfully....");
            break;
        case 2:
            if (FIRST > LAST || FIRST == -1)
            {
                printf("\nQueue Underflow");
            }
            else
            {
                printf("\n%d deleted successfully", queue[FIRST]);
                FIRST++;
            }
            break;
        case 3:
            if (FIRST > LAST || FIRST == -1)
            {
                printf("\nQueue is Empty!!!");
            }
            else
            {
                printf("\nQueue :");
                for (i = FIRST; i <= LAST; i++)
                {
                    printf("\n%d", queue[i]);
                }
            }
            break;
        case 4:
            printf("\nExited Successfully...");
            exit(1);
            getch();
            break;
        default:
            printf("\nWrong Choice!!! Try Again!!!");
            break;
        }
        getch();
    }
}