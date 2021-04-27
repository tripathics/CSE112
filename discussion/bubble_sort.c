#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b);

int main(void)
{
    
    int array[] = {1, 2, 3, 4, 5, 8, 7, 6};

    // i for the last element of array
    bool swap_check = true;
    for (size_t i = 8 - 1; swap_check != false; i--)
    {
        swap_check = false;
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swap_check = true;
            }
        }
    }

    // Printing the sorted array
    for (size_t i = 0; i < 8; i++)
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