// string length using strlen

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // Remove newline character
    printf("Length of string: %lu\n", strlen(str));
    return 0;
}