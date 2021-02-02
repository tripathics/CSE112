/**************************************************
 *      Creating the pattern                      *
 *      A B C D E                                 *
 *      B C D E                                   *
 *      C D E                                     *
 *      D E                                       *
 *      E                                         *
 **************************************************/

#include<stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {   
        for ( j = i; j <= 5; j++)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
}
