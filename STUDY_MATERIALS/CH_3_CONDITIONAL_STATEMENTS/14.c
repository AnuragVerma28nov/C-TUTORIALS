//TO CHECK YOU'R ADULT OR NOT USING ELSE-IF STATEMENT
#include<stdio.h>
int main()
{
 int age;
 printf("enter age:");
 scanf("%d", &age);
 if (age>18)
 {
  printf("adult");
 }
 else if (age>15)
 {
   printf("teenager");
 }
 else
 {
   printf("child");
 }
 return 0;
}