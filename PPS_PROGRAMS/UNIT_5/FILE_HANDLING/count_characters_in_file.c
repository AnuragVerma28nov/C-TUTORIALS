// To count the number of characters in FILE

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
    int count = 0;
    char c;
    while ((c = fgetc(file)) != EOF)
    {
        count++;
    }
    fclose(file);
    printf("Number of characters: %d\n", count);
    return 0;
}
