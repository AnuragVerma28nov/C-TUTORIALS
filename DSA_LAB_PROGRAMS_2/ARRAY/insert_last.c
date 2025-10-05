//Insertion at last position 1-D array
#include<stdio.h>
int main(){
    int a[100],i,n,num;
    printf("enter the range of the array: ");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);  
    }
    printf("enter the element to insert at the end: ");
    scanf("%d",&num);
    if (n<0||n>100)
    {
        printf("invaild position array is full.");
    }
    else{
        a[n]=num; 
        n++;
    }
    printf("After the insertion of array:\n");
    for ( i = 0; i<n; i++)
    {
        printf("%d\t",a[i]);  
    }
    return 0;
}