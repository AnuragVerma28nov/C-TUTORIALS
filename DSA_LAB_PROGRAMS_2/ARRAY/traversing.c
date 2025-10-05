//Proram to traversing an 1-D array:-
#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter the range: ");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
         printf("enter %d elements of array:",i+1);
        scanf("%d",&a[i]);  
    }
    printf("traversing of array:\n");
    for ( i = 0; i <n; i++)
    {
        printf("%d\t",a[i]);
    }
        return 0;
}