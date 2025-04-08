// // dynamic memory allocation calloc function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int *)calloc(size, sizeof(int));
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
    free(arr);
    return 0;
}
