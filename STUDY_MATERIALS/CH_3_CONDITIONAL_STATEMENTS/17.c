//TO CHECK STUDENT IS PASS OR FAILED
#include<stdio.h>
int main()
{ 
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if (marks>30)
    {
      printf("passed");
    }
    else
    {
      printf("failed");
    }
 return 0;
}