// Write a C program to implement Shell sort on an array

#include<stdio.h>
#include<conio.h>

int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
              arr[j] = arr[j - gap];
            }  
            arr[j] = temp;
        }
    }
    return 0;
}

int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: ");
    display(arr, size);
    shellSort(arr, size);
    printf("Sorted array: ");
    display(arr, size);
    return 0;
}


// Worst Case Complexity: O(n^2)
// Best Case Complexity: Ω(n log(n))
// Average Case Complexity: O(n*log n)~O(n^1.25)
// Space Complexity: O(1)