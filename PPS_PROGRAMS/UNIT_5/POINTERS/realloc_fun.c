// dynamic memory allocation realloc function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter initial size of array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return -1;
    }
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int newSize;
    printf("Enter new size of array: ");
    scanf("%d", &newSize);
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return -1;
    }
    printf("Enter new elements of array:\n");
    for (int i = size; i < newSize; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements after reallocation:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
