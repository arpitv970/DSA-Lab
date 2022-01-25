// WAP to substract to matrices

#include <stdio.h>

int main()
{
    int arr1[50][50];   // matrix 1
    int arr2[50][50];   // matrix 2
    int sub[50][50];    // substraction of both matrices
    int x, y;   // order for matrix, since for substraction it must be same for both matrix

    printf("Enter the order of matrices: ");
    scanf("%d %d", &x, &y);

    // taking matrix 1 from user as input
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            printf("Enter the data for matrix 1 at index (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");

    // taking matrix 2 from user as input
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            printf("Enter the data for matrix 2 at index (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    // substraction two matrix
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
        
    }

    // printing final substraction of matrices
    printf("\nThe substraction of matrices is:\n");
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
     

    return 0;
}