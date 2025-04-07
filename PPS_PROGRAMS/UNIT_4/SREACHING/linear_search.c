// linear search

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter target element: ");
    scanf("%d", &target);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Target element found at index %d.\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Target element not found.\n");
    }
    return 0;
}
