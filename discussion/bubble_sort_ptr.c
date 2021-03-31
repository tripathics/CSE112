#include <stdio.h>

#define MAX 50
int array[MAX];

void swap(int *a, int *b);

int main(void)
{
    // Getting size of array
    int size;
    printf("Size of array: ");
    scanf("%i", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Element %i: ", i + 1);
        scanf("%i", &array[i]);
    }
    
    // i for the last element of array
    for (int i = size - 1, swap_counter = 1; swap_counter != 0; i--)
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
    for (int i = 0; i < size; i++)
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