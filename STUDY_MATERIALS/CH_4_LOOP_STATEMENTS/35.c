//FACTORIAL OF A NUM
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter a num");
    scanf("%d",&n);
    for (int i=1; i <=n; i++){
      fact=fact*i;  
    }
    printf("factorial 0f %d is %d",n,fact);
    return 0;
    }
