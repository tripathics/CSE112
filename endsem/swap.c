/******************************************************************************
 * Q3. Write a c program to swap two number using call by reference concept.  *
 * Chandrashekhar Tripathi                             Roll no: ECE/20/28     *
 ******************************************************************************/

#include <stdio.h>
// Function prototype
void swap(int *a, int *b);

int main(void)
{
    int num1, num2;
    // Getting numbers from user
    printf("Enter the number 'num1': ");
    scanf("%i", &num1);
    printf("Enter the number 'num2': ");
    scanf("%i", &num2);

    // Printing numbers before swap
    printf("Before swap:\nnum1: %i\tnum2: %i\n", num1, num2);

    // Calling swap function for swapping these numbers
    swap(&num1, &num2);

    // Printing numbers after swap
    printf("Before swap:\nnum1: %i\tnum2: %i\n", num1, num2);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}