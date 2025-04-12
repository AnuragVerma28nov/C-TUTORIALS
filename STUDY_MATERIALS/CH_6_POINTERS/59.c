// function call by value

#include <stdio.h>

void square(int n)
{
    n = n * n;
    printf("Square= %d\n", n);
}

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    square(num);
    printf("Number= %d", num);
    return 0;
}