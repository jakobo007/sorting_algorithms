#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - bubble sort in ascending order
 * 
 * @array: the array to be printed
 * @size: the size of the array
 * Return: sorted array
*/
void bubble_sort(int *array, size_t size)
{
    unsigned int i, j, k; 
    int temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size- i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                for (k = 0; k < size; k++)
                {
                    printf("%d, ", array[k]);
                }
                printf("\n");
            }
        }
    }
}
