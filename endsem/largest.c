/********************************************************************
 * Q7. Write a c program to find the largest element in an array.   *
 * Chandrashekhar Tripathi                       Roll no: ECE/20/28 *
*********************************************************************/

#include <stdio.h>
// Max number of array elements
#define MAX 20

// Array
int array[MAX];

int main(void)
{
    int n, largest;
    printf("Enter the size of array: ");
    scanf("%i", &n);

    if (n > MAX)
    {
        printf("Max size of array is 20\n");
        return 1;
    }
    
    // Getting the elements of array
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%i", &array[i]);
    
    // Finding the largest number
    for (int i = 0; i < n - 1; i++)
    {
        // For storing index of largest number among two temporarily
        int max = 0;
        for (int j = i; j < n; j++)
        {
            if (array[max] < array[j])
                max = j;
        }
        largest = array[max];
    }

    // Printing the largest number
    printf("The largest number is: %i\n", largest);
    return 0;
}
