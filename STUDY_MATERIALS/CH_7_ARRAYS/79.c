//  find the largest number in an array

#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int l = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", l);

    return 0;
}
