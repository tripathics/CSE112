/*******************************************************
 * Q6. Write a c program to multiply two matrices      *
 * Chandrashekhar Tripathi      Roll no: ECE/20/28     *
 *******************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a[10][10],b[10][10],prod[10][10],r,c,i,j,k;
    printf("enter the number of row: ");
    scanf("%d",&r);
    printf("enter the number of column: ");
    scanf("%d",&c);
    
    // Filling up the elements of matrices
    printf("enter the first matrix elements=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter the second matrix elements=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    }

    // Multiplying the matrices
    printf("Product of the matrices = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            prod[i][j]=0;
            for(k=0;k<c;k++)
                prod[i][j]+=a[i][k]*b[k][j];
        }
    }
    
    //for printing result
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",prod[i][j]);
        printf("\n");
    }
    return 0;
}