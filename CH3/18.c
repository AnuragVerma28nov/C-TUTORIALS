//TO CHECK STUDENT IS PASS OR FAILED
#include<stdio.h>
int main()
{ 
    int marks;
     printf("enter marks:");
     scanf("%d",&marks);
     if (marks<30)
     {
       printf("grade C");
     }
     else if(marks>=30 && marks<70)
     {
      printf("garde B");
     }   
     else if (marks>=70 && marks<90)
     {
       printf("grade A");
     }
     else if (marks>=90 && marks<=100)
     {
        printf("gradeA++");
     }
     else
     {
        printf("worng input");
     }
     
 return 0;
}