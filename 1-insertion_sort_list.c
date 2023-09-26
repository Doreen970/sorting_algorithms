#include "sort.h"

/**
 * insertion_sort_list - an algorithm to sort a list
 * using insertion sort
 *
 * @list: points to the head node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *now = NULL, *future = NULL, *t = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	now = (*list)->next;

	while (now)
	{
		future = now->next;
		t = now;

		while (t->prev && t->prev->n > t->n)
		{
			t->prev->next = t->next;
			if (t->next)
				t->next->prev = t->prev;
			t->next = t->prev;
			t->prev = t->prev->prev;
			t->next->prev = t;
			if (t->prev == NULL)
				*list = t;
			else
				t->prev->next = t;
			print_list(*list);
		}
		now = future;
	}
}
