// WAP for selection sort

#include <stdio.h>

// fuction to swap elements
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// function to sort array
void selectionSort(int arr[], int n)
{
    int step, j, min_idx;
    for (step = 0; step < n - 1; step++)
    {
        min_idx = step;
        for (j = step + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swapping the min_idx element with arr[step]
        Swap(&arr[min_idx], &arr[step]);
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

    selectionSort(arr, n);

    printf("Array after sorting: ");
    printArray(arr, n);
    return 0;
}