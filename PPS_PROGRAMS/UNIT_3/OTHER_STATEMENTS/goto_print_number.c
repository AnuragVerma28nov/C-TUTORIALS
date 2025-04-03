// print number goto statements

#include <stdio.h>

int main()
{
    int i = 1;
start:
    printf("%d ", i);
    if (i == 10)
    {
        return 0;
    }
    i++;
    goto start;
}