// To display the content of file

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }
    char c;
    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }
    fclose(file);
    return 0;
}