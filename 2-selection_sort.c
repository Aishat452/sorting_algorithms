#include "sort.h"

/**
 * swap - Swaps two integer values.
 * @a: Pointer to the first value.
 * @b: Pointer to the second value.
 *
 * Return: void
 */
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order using selection sort.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_index;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }
        if (min_index != i)
        {
            swap(&array[i], &array[min_index]);
            print_array(array, size);
        }
    }
}

