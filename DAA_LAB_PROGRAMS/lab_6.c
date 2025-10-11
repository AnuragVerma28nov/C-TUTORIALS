#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid; // Element found
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    } 
    return -1; // Element not found
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

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
        for (int i = 0; i < n; i++) {
        printf("Enter %d elements: ", i+1);
        scanf("%d", &arr[i]);
    }
    // Sort the array before binary search
    printf("Entered Array: ");
    display(arr, n);
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Element found at index %d (0-based index).\n", result);
    else
        printf("Element not found.\n");
    return 0;
}

