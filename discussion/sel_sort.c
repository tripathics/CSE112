#include <stdio.h>

#define MAX 50

// declaring global array
int array[MAX];

void swap(int *x, int *y);

int main(void)
{
    int size;

    // getting size of array from user
    printf("How many numbers do you want to enter?\t");
    scanf("%d", &size);

    // getting array elements from user
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // sorting
    
    for (int i = 0; i < size - 1; i++)
    {
        int in_smallest = i;                        // index of smallest number encountered so far
        for (int j = i + 1; j < size; j++)
        {
            if (array[in_smallest] > array[j])
            {
                in_smallest = j;
            }
        }

        swap(&array[i], &array[in_smallest]);
    }

    printf("sorted: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}

// swapping using call by reference
void swap(int *x, int *y)
{
    int temp;       // for storing some value temporarily
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}