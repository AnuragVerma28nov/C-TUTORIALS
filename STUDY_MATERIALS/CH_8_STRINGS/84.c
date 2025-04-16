// input a string frist name & last name print it

#include <stdio.h>


int main()
{

    char f_name[50];
    char l_name[50];

    printf("Enter your frist name: ");
    scanf("%s", f_name);

    printf("Enter your last name: ");
    scanf("%s", l_name);

    printf("Your name is %s %s .", f_name,l_name);
    
    return 0;
}
