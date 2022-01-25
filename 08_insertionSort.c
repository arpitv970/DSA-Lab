// WAP for insertion sort

#include <stdio.h>

// function to sort array
void insertionSort(int arr[], int n){
    int i, j, key;

    // loop to select key
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;   

        while (j>=0 && arr[j]>key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        
        arr[j + 1] = key;
    }
    
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");    
}

int main()
{
    int arr[] = {23, 1, 34, 5, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array before sorting: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Array after sorting: ");
    printArray(arr, n);
    
    return 0;
}