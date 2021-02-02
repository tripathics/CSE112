/**************************************************
 *      Creating the pattern                      *
 *      E                                         *
 *      E D                                       *
 *      E D C                                     *
 *      E D C B                                   *
 *      E D C B A                                 *
 **************************************************/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >=i ; j--)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
    
}