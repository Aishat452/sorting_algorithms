#include "sort.h"

/**
 * swap - Function that swaps the values of two variables.
 * @a: first variables pointer.
 * @b: second variables pointer.
 * Return: void
 */

void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
 * bubble_sort - sorting an array elements
 * @array: the Array 
 * @size: the Arrays size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL && size == 0)
		return;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
