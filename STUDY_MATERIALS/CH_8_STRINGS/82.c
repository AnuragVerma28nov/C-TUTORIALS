// create a string frist and last name print its characters using loops

#include <stdio.h>

void print_char(char arr[]);

int main()
{

    char f_name[] = "anurag";
    char l_name[] = "verma";

    print_char(f_name);
    print_char(l_name);
    
    return 0;
}
void print_char(char arr[])
{

    for (int i = 0; arr[i] != '\0'; i++)

    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
