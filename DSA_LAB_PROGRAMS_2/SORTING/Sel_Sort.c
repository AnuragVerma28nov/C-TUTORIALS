#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    // Traverse through all array elements
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Swap the found minimum el.ement with the first element
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int n, i;
    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    // Input elements from the user
    for (i = 0; i < n; i++) {   
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    // Perform selection sort
    selectionSort(arr, n);
    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}