#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                        order using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *now, *sorted, *prev, *nx;

	if (list == NULL || *list == NULL || (*list)->nx == NULL)
		return;
	sorted = (*list)->nx;
	while (sorted != NULL)
	{
		now = sorted;
		sorted = sorted->nx;
		prev = now->prev;
		nx = now->nx;
		while (prev != NULL && prev->n > current->n)
		{
			if (prev->prev != NULL)
				prev->prev->nx = now;
			if (nx != NULL)
				nx->prev = prev;
			now->prev = prev->prev;
			prev->nx = nx;
			prev->prev = now;
			now->nx = prev;
			prev = now->prev;
			nx = now->nx;
			if (prev == NULL)
				*list = now;
			print_list(*list);
		}
	}
}
