// WAP to multiplication to matrices

#include <stdio.h>

int main()
{
    int arr1[50][50];   // matrix 1
    int arr2[50][50];   // matrix 2
    int mul[50][50];    // multiplication of both matrices
    int x1, y1;         // order of matrix 1
    int x2, y2;         // order of matrix 2

    printf("Enter the order of matrix 1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the order of matrix 2: ");
    scanf("%d %d", &x2, &y2);

    // taking matrix 1 from user as input
    for (int i = 1; i <= x1; i++)
    {
        for (int j = 1; j <= y1; j++)
        {
            printf("Enter the data for matrix 1 at index (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");

    // taking matrix 2 from user as input
    for (int i = 1; i <= x2; i++)
    {
        for (int j = 1; j <= y2; j++)
        {
            printf("Enter the data for matrix 2 at index (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    // multiplication of matrices
    for (int i = 1; i <= x1; i++)
    {
        for (int j = 1; j <= y2; j++)
        {
            mul[i][j] = 0;
            for (int k = 1; k <= y1; k++)
            {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
                        
        }
    }

    printf("\nThe product of matrices is:\n");
    // printing result
    for (int i = 1; i <= x1; i++)
    {
        for (int j = 1; j <= y2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");        
    }    

    return 0;
}