//CREATION OF LINK LIST
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};struct node *FIRST = NULL, *LAST = NULL;
void addElement();
void main()
{
    int choice;
    while (1)
    {
        system("CLS");
        printf("Operation which can be performed on Singly Linked List: -");
        printf("\nEnter 1 to add element");
        printf("\nEnter 2 to EXIT");
        printf("\n\nEnter your choice of operation : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addElement();
            break;
        case 2:
            printf("\n\nExited Successfully.....");
            getch();
            exit(1);
            break;
        default:
            printf("\n\nYou Entered Wrong Choice !!!  Try Again !!!!!!");
            break;
        }
        getch();
    }
    return;
} 
void addElement()
{
    int num;
    printf("\nEnter Element to add : ");
    scanf("%d",&num);
    struct node *NEW=(struct node *)malloc(sizeof(struct node));
    if(NEW==NULL)
    {
        printf("\nMemory Allocation Failed...");
        return;
    }
    NEW->data=num;
    NEW->ptr=NULL;
    if(FIRST==NULL)
    {
        FIRST=LAST=NEW;
    }
    else
    {
        LAST->ptr=NEW;
        LAST=NEW;
    }
    printf("\nElement added Successfully");
    return;
}