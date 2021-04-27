/**
 * Pseudocode:
 * 1) call the first element sorted
 *      : place a marker after first element (left side sorted, right side unsorted)
 * 
 * 2) keep comparing first element of unsorted array with last element of sorted array, moving from last to 
 *    second last, third last and so on till (first unsorted element !> element in sorted array)
 * 3) place the number from sorted array next to that element (in step 2) and shift all elements of sorted array
 *    the requisite places
 * 4) move the marker to right
 **/

#include <stdio.h>

void insertion_sort(int array[], int size);
void shift(int array[], int marker, int places);

int main(void)
{
    // getting input 
    int size;
    printf("Size of array: ");
    scanf("%i", &size);

    int array[size];

    printf("Enter the elements:\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%i", &array[i]);
    }

    // sorting using merge_sort
    insertion_sort(array, size);

    // printing the sorted array
    printf("Sorted: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i%s", array[i], (i != size - 1) ? ", " : "");
    }
    printf("\n");

    return 0;
}


void insertion_sort(int array[], int size)
{
    // for the marker between sorted and unsorted arrays
    for (int marker = 0; marker < size - 1; marker++)
    {
        int places = 1;
        // comparing the ussorted and sorted
        if (array[marker] > array[marker + 1])
        {
            for (long j = marker - 1; j >= 0; j--)
            {
                if (array[j] < array[marker + 1])
                {
                    break;
                }
                places++;
            }

            shift(array, marker, places);
        }
    }
}

void shift(int array[], int marker, int places)
{
    int temp = array[marker + 1];                        // first element of unsorted array

    int less_than_unsorted = marker - places;
    for (int i = marker; i > less_than_unsorted; i--)
    {
        array[i + 1] = array[i];
    }

    array[less_than_unsorted + 1] = temp;

    return;
}