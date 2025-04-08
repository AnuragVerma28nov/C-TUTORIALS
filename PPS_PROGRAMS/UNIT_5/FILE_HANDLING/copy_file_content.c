// To copy the content of one file to another file

#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char src_filename[100], dest_filename[100];
    printf("Enter source filename: ");
    scanf("%s", src_filename);
    printf("Enter destination filename: ");
    scanf("%s", dest_filename);
    src = fopen(src_filename, "r");
    dest = fopen(dest_filename, "w");
    if (src == NULL || dest == NULL)
    {
        printf("File not found.\n");
        return 1;
    }
    char c;
    while ((c = fgetc(src)) != EOF)
    {
        fputc(c, dest);
    }
    fclose(src);
    fclose(dest);
    return 0;
}
