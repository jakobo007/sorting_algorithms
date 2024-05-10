#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array in ascending order using Selection sort
 * @array: The array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
    unsigned int i, j, k;
    unsigned int min_pos, temp;

    for (i = 0; i < (size - 1); i++)
    {
        min_pos = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_pos])
            {
                min_pos = j;
            }
        }

        if (min_pos != i)
        {
            temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }

        for (k = 0; k < size; k++)
        {
            printf("%d, ", array[k]);
        }
        printf("\n");
    }
}
