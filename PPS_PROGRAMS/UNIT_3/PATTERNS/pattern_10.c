/*
4 4 4 4 
3 3 3 
2 2 
1
*/
#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("%d ", i);
        }
        printf("\n");
    }
    return(0);
}
