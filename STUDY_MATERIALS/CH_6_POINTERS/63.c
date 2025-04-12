//  find out output

#include <stdio.h>

void printAddress(int n);

int main()
{
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);
    printf("%p\n", &n);
    printAddress(n);
    return 0;
}
void printAddress(int n)
{

    printf("%p\n", &n);
}