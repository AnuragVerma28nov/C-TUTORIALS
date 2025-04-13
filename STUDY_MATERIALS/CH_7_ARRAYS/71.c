// pointer arithmetic

#include <stdio.h>

int main()
{   // For integer
    printf("For integer:\n"); 
    int age = 22;
    int *ptr_i = &age;
    printf("ptr: %u\n", ptr_i);
    ptr_i++;
    printf("ptr: %u\n", ptr_i);
    ptr_i--;
    printf("ptr: %u\n", ptr_i);

    // For float
    printf("For float:\n");
    float pr = 100.0;
    float *ptr_f = &pr;
    printf("ptr: %u\n", ptr_f);
    ptr_f++;
    printf("ptr: %u\n", ptr_f);
    ptr_f--;
    printf("ptr: %u\n", ptr_f);

    // For char
    printf("For char:\n");
    char st = '*';
    char *ptr_c = &st;
    printf("ptr: %u\n", ptr_c);
    ptr_c++;
    printf("ptr: %u\n", ptr_c);
    ptr_c--;
    printf("ptr: %u\n", ptr_c);

    return 0;
}