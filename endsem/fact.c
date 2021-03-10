/********************************************************************************
 * Q4. Write c programming to calculate factorial of a number using recursion.  *
 * Chandrashekhar Tripathi                                  Roll no: ECE/20/28  *
 ********************************************************************************/

#include <stdio.h>

int fact(int n);

int main(void)
{
    int num;
    // Getting number from the user
    printf("Enter the number: ");
    scanf("%i", &num);

    // printing the factorial by calling fact() funciton
    printf("Factorial of %i = %i\n", num, fact(num));
    return 0;
}

int fact(int n)
{
    // base case
    if (n == 1)
        return 1;
    // recursive case
    else
        return n * fact(n - 1);
}