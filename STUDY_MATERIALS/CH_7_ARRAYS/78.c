// occurance of a number "x" in an array

#include <stdio.h>

int main()
{
    int arr[100], n, x, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its occurance: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("The number %d occurs %d times in the array.\n", x, count);

    return 0;
}
