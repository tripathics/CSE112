/**************************************************************************
 * Q2. Write a c programming to add two 3x3 matrices using array.         *
 * Chandrashekhar Tripathi                             Roll no: ECE/20/28 *
 **************************************************************************/

#include <stdio.h>

int main(void)
{
    int MatA[3][3], MatB[3][3], MatSum[3][3];

    // Getting elements of matrix from user
    printf("Matrices adder for 3x3 matrices\n\n");
    printf("Enter the elements of Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%i", &MatA[i][j]);
    }
    printf("Enter the elements of Matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%i", &MatB[i][j]);
    }

    // adding the matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            MatSum[i][j] = MatA[i][j] + MatB[i][j];
    }

    // Printing the Sum matrix
    printf("\nSum of matrices is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i\t", MatSum[i][j]);
        }
        printf("\n");
    }
    return 0;
}