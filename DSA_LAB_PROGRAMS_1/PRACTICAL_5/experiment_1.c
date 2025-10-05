/*Program for deletion of a node in a
singly listed list from beginning.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *ptr;
};
struct node *FIRST = NULL, *LAST = NULL;

void deleteElement();

void main()
{
    int choice, num;
    while (1)
    {
        system("CLS");
        printf("\nOperations that can be performed on Linked List :\n");
        printf("\nChoice 1---> Delete Element");
        printf("\nChoice 2---> Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            deleteElement();
            break;
        case 2:
            printf("Exited Successfully....");
            getch();
            exit(1);
        default:
            printf("Wrong Choice !!!  Try Again !!! ");
        }
        getch();
    }
    return;
}

void deleteElement()
{
    if (FIRST == NULL)
    {
        printf("\nNo Elements in linked list...");
    }
    else
    {
        FIRST = FIRST->ptr;
        printf("\nElement Deleted Successfully...");
    }
}