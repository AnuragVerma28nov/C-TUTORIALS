//TO CHECK YOU'R ADULT OR NOT
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
 else
 {
    printf("not adult");
 }
 return 0;
}