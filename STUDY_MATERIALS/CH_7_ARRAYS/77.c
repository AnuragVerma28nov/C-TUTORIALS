// create 2D array, store tables of 2 and 3

#include <stdio.h>

int main()
{
    int t[2][10];

    for (int i = 0; i < 10; i++)
    {
        t[0][i] = 2 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        t[1][i] = 3 * (i + 1);
    }

    printf("Table of 2: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", t[0][i]);
    }
    printf("\n");

    printf("Table of 3: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", t[1][i]);
    }
    printf("\n");

    return 0;
}
