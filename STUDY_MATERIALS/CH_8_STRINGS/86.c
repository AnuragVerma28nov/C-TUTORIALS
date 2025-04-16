// use of fgets and fputs

#include <stdio.h>


int main()
{

    char name[50];
   
    printf("Enter your full name: ");

    fgets(name,50,stdin);

    puts(name);

    return 0;
}
