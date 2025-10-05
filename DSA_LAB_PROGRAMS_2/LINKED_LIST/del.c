#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void  del_beginning()
{
    struct node *ptr;
        if(first==NULL)
        {
         printf("underflow");
         return;
        }
        ptr=frist;
        frist=ptr->link;
        free(ptr);  
}