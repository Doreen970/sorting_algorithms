#include "sort.h"

/**
 * bubble_sort - sorts out an array using bubble sort
 * in ascenfing order
 *
 * @array: the unsorted array
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t top, index, swp, t;

	if (array)
	{
		for (top = 0; top < size - 1; top++)
		{
			swp = 0;
			for (index = 0; index < size - 1 - top; index++)
			{
				if (array[index] > array[index + 1])
				{
					t = array[index];
					array[index] = array[index + 1];
					array[index + 1] = t;
					print_array(array, size);
					swp = 1;
				}
			}
			if (swp == 0) 
				print_array(array, size);
		}
	}
}
