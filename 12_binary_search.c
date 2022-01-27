#include <stdio.h>
#include <conio.h>

// function for binary search
void binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n;
    int mid = s+(e-s)/2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            printf("Index of %d in given array: %d", key, mid);
            break;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        
        mid = s + (e - s)/2;
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

    binarySearch(arr, n, key);

    return 0;
}