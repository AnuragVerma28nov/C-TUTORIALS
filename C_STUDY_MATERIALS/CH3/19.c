//TO FIND IF A CHARACTER ENTER BY USER IS UPPER CASE OR NOT
#include<stdio.h>
int main()
{ 
    char ch;
     printf("enter character:");
     scanf("%c",&ch);
     if (ch>='A'&& ch<='Z')
     {
       printf("upper case\n");
     }
     else if(ch>='a' && ch<='z')
     {
      printf("lower case\n");
     }   
     else
     {
      printf ("not english latter\n");
     }
  return 0;
}