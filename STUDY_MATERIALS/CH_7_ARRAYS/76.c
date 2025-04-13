//  store & print the first n Fibonacci numbers

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("Fibonacci Series: %d %d ", fib[0], fib[1]);

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t ", fib[i]);
    }

    return 0;
}
