#include "sort.h"

/**
 * quick_sort - sort an array using the quick sort
 * method... partition and swapping
 *
 * @array: an array of integers
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	sort_it(array, 0, size - 1, size);
}

/**
 * sort_it - sorts out the array
 *
 * @array: array to sort
 * @begin: the zero index
 * @end: the nth index
 * @size: array size
 */
void sort_it(int *array, int begin, int end, int size)
{
	int pIndex;

	if (begin < end)
	{
		pIndex = partition(array, begin, end, size);
		sort_it(array, begin, pIndex - 1, size);
		sort_it(array, pIndex + 1, end, size);
	}
}

/**
 * partition - subdivides the array
 *
 * @array: the array
 * @low: the lower limit
 * @high: the upper limit
 * @size: array size
 *
 * Return: the partition index
 */
int partition(int *array, int low, int high, int size)
{
	int p = array[low], start = low, end = high;

	while (start < end)
	{
		while (array[start] <= p)
			start++;
		while (array[end] >= p)
			end--;
		if (start < end)
		{
			swap(&array[start], &array[end]);
			print_array(array, size);
		}
	}
	print_array(array, size);
	swap(&array[low], &array[end]);

	return (end);
}

/**
 * swap - swaps the value in the array
 *
 * @x: the first position
 * @y: the second position
 */
void swap(int *x, int *y)
{
	int t = *x;

	*x = *y;
	*y = t;
}
