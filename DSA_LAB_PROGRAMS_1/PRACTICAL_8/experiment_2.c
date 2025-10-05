/*Write a program and algorithm for Heap
Sort.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void heapSort(int heap[], int num);
void maxHeap(int arr1[], int n1);

void main()
{
    system("CLS");
    int i, j, n, temp;
    int arr[50];
    printf("Enter number of elements in Heap : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter %d element : ", (i));
        scanf("%d", &arr[i]);
        maxHeap(arr, i);
    }
    heapSort(arr, n);
}

void maxHeap(int arr1[], int n1)
{
    int j, parent, temp1;
    for (j = n1; j > 1; j--)
    {
        parent = j / 2;
        if (arr1[j] > arr1[parent])
        {
            temp1 = arr1[j];
            arr1[j] = arr1[parent];
            arr1[parent] = temp1;
        }
    }
}

void heapSort(int heap[], int num)
{
    int x, y = num;
    printf("\nSorted : ");
    for (x = 1; x <= num; x++)
    {
        printf("%d , ", heap[1]);
        heap[1] = heap[y--];
        maxHeap(heap, num - x);
    }
    printf("\b\b ");
}