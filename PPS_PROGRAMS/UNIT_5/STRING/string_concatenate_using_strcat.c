// string concatenate using strcat

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0'; // Remove newline character
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0'; // Remove newline character
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
