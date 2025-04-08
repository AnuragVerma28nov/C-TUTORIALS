// string copy using strcpy

#include <stdio.h>
#include <string.h>

int main()
{
    char src[100], dest[100];
    printf("Enter source string: ");
    fgets(src, sizeof(src), stdin);
    src[strlen(src) - 1] = '\0'; // Remove newline character
    strcpy(dest, src);
    printf("Destination string: %s\n", dest);
    return 0;
}
