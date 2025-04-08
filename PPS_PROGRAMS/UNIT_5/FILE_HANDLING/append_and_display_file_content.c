// To append some text at the end of the file and display its content

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100], text[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter text to append: ");
    scanf("%s", text);
    file = fopen(filename, "a+");
    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }
    fputs(text, file);
    fputs("\n", file);
    rewind(file);
    char c;
    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }
    fclose(file);
    return 0;
}
