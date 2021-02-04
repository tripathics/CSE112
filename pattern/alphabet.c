/***********************
 * A                   *
 * B C                 *
 * D E F               *
 * G H I J             *
 * K L M N O           *
 * ********************/

#include<stdio.h>
int main()
{
    int i, j, n, k=65;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}