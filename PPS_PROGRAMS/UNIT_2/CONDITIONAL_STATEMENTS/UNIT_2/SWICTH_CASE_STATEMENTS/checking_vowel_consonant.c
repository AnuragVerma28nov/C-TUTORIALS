// vowel or consonant using switch case

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a vowel.\n", ch);
        break;
    default:
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            printf("%c is a consonant.\n", ch);
        }
        else
        {
            printf("%c is not a letter.\n", ch);
        }
        break;
    }

    return 0;
}
