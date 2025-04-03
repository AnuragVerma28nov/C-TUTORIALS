/*
4 3 2 1 
4 3 2 
4 3 
4
*/
#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return(0);
}
