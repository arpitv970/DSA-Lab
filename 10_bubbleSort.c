// WAP for bubble sort
#include <stdio.h>

// fuction to swap elements
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// function to sort array
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Utility function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {23, 1, 34, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array after sorting: ");
    printArray(arr, n);

    return 0;
}