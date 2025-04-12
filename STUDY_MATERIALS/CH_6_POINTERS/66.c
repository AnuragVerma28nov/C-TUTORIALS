// Print elements of an array in reverse order using a pointer

#include <stdio.h>

int main()
{
    int arr[5], i;
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Elements in reverse order: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", *(ptr + i));
    }

    return 0;
}
