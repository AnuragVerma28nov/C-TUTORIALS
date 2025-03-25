// TO CHECK THE ALPHABET OR DIGIT OR SPECIAL SYMBOL

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case alphabet.\n", ch);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case alphabet.\n", ch);
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is digit.\n", ch);
    }

    else
    {
        printf("%c is a special symbol.", ch);
    }

    getch();
}
