// to write multiple lines in a file

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100], text[100];
    int num_lines;
    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter number of lines: ");
    scanf("%d", &num_lines);
    file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }
    for (int i = 0; i < num_lines; i++)
    {
        printf("Enter line %d: ", i + 1);
        scanf("%s", text);
        fputs(text, file);
        fputs("\n", file);
    }
    fclose(file);
    return 0;
}
