#include<stdio.h>
#include<conio.h>
void main(){
    int arr[100],i,ub,size=100;
    printf("enter no. of element: ");
    scanf("%d",&ub);
    if (ub>size)
    {
    printf("overflow");
    }
    else{
        for ( i = 0; i < ub; i++)
        {
            printf("enter %d element: ",(i+1));
            scanf("%d",&arr[i]);
        }
        for ( i = 0; i < ub-1; i++)
        {
            arr[i]=arr[i+1];
        }
        printf("After Deletion of Array: ");
        for ( i = 0; i < ub-1; i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    getch();
}