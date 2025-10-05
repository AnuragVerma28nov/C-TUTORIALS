// Write a C program to implement insertion sort on an array

# include<stdio.h>

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array: ");
    display(arr, size);
    insertionSort(arr, size);
    printf("Sorted array: ");
    display(arr, size);
    
    return 0;
}

