#include "sort.h"
/**
 * insertion_sort_list - function that swaps
 *
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *swapped, *temp;

	if (!list || !*list)
		return;
	curr = *list;
	while ((curr = curr->next))
	{
		swapped = curr;
		while (swapped->prev && swapped->n < swapped->prev->n)
		{
			temp = swapped->prev;
			if (swapped->next)
				swapped->next->prev = temp;
			if (temp->prev)
				temp->prev->next = swapped;
			else
				*list = swapped;
			temp->next = swapped->next;
			swapped->prev = temp->prev;
			swapped->next = temp;
			temp->prev = swapped;
			print_list(*list);
		}
	}
}
