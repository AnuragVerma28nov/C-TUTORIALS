// string compare using strcmp

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string is lexicographically smaller.\n");
    }
    else
    {
        printf("Second string is lexicographically smaller.\n");
    }
    return 0;
}