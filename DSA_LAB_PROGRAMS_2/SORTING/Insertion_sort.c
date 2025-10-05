#include <stdio.h>
#include <conio.h>
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    InsertionSort(arr, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");
    getch();
}