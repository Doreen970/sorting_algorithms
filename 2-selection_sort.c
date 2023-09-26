#include "sort.h"

/**
 * selection_sort - arranges an array in ascending order
 * using selection sort
 *
 * @array: array to arrange
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, min;
	int t;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
				min = b;
		}
		if (min != a)
		{
			t = array[a];
			array[a] = array[min];
			array[min] = t;
			print_array(array, size);
		}
	}
}
