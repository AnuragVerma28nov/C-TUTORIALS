// Print English alphabet using a pointer

#include <stdio.h>

int main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char *ptr = alphabet;

    printf("English Alphabet: ");
    while (*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}