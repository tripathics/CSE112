#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    // Getting size of array
    size_t size;
    printf("Size of array: ");
    scanf("%zu", &size);
    
    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        scanf("%i", &array[i]);
    }
    
    // i for the last element of array
    for (size_t i = size - 1, swap_counter = 1; swap_counter != 0; i--)
    {
        swap_counter = 0;
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swap_counter++;
            }
        }
    }

    // Printing the sorted array
    for (size_t i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
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