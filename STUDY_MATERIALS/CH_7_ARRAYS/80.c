// insert a number at the end of an array

#include <stdio.h>

int main()
{
    int arr[100], n, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the end: ");
    scanf("%d", &x);

    arr[n] = x;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t ", arr[i]);
    }

    return 0;
}
