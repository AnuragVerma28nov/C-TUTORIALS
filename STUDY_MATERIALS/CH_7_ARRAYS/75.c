// reverse of an array

#include <stdio.h>

void reverse_arr(int arr[], int n);

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
    printf("Reverse of elements: ");
    reverse_arr(arr, n);
    return 0;
}

void reverse_arr(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\t ", arr[i]);
    }
}