#include <stdio.h>
#include <stdlib.h>
#define SIZE 3 // Size of the matrix
int main()
{
    printf("Matrix Multiplication!\n");
    int A[SIZE][SIZE]; // Matrix 1
    int B[SIZE][SIZE]; // Matrix 2
    int C[SIZE][SIZE]; // Resultant matrix
    int row, col, k, sum;
/* Input elements in first matrix from user */

printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
  for(row=0; row<SIZE; row++)   //Multiply both matrices A*B
    {
        for(col=0; col<SIZE; col++)
        {
            sum = 0;
            /*
             * Multiply row of first matrix to column of second matrix
             * and store sum of product of elements in sum.
             */
            for(k=0; k<SIZE; k++)
            {
                sum =sum+ A[row][k] * B[k][col];
            }

            C[row][col] = sum;
        }
    }

    /* Print product of the matrices */
    printf("\nProduct of matrix A * B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
return 0;
}
