// number of odd number in a array

#include <stdio.h>

int countodd(int arr[], int n);

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
    printf("Number of odd elements: %d", countodd(arr, n));
    return 0;
}

int countodd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            count++;
    }
    return count;
}