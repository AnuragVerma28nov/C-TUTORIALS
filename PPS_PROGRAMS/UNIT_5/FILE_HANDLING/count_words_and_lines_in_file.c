//  To count the number of words and text lines in a file

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
    int word_count = 0, line_count = 0;
    char c;
    while ((c = fgetc(file)) != EOF)
    {
        if (c == ' ')
        {
            word_count++;
        }
        else if (c == '\n')
        {
            line_count++;
        }
    }
    fclose(file);
    printf("Number of words: %d\n", word_count + 1);
    printf("Number of lines: %d\n", line_count + 1);
    return 0;
}
