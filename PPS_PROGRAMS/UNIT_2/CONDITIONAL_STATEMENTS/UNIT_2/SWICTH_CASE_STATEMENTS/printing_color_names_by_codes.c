// print color code names  switch case

#include <stdio.h>

int main()
{
    char c;

    printf("Enter color code (R, G, B, Y, O, P): ");
    scanf(" %c", &c);

    switch (c)
    {
    case 'R':
    case 'r':
        printf("Red\n");
        break;
    case 'G':
    case 'g':
        printf("Green\n");
        break;
    case 'B':
    case 'b':
        printf("Blue\n");
        break;
    case 'Y':
    case 'y':
        printf("Yellow\n");
        break;
    case 'O':
    case 'o':
        printf("Orange\n");
        break;
    case 'P':
    case 'p':
        printf("Pink\n");
        break;
    default:
        printf("Invalid color code\n");
        break;
    }

    return 0;
}
