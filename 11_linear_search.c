#include <stdio.h>

// function for linear search
void linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Index of %d in given array: %d", key, i);
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

int main() {
    int arr[] = {1, 4, 6, 7, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    printf("Given array: ");
    printArray(arr, n);

    printf("Enter the data to return its index in given array: ");
    scanf("%d", &key);

    linearSearch(arr, n, key);
}