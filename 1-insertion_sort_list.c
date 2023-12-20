#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * in ascending order
 * @list: the list to be sorted
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t **current;

	while (*list)
	{
		listint_t *node = *list;
		*list = node->next;

		*current = sorted;
		while (*current && (*current)->n < node->n)
		{
			current = &(*current)->next;
		}

		node->next = *current;
		if (current == &sorted)
		{
			node->prev = NULL;
		}
		else
		{
			node->prev = (*current)->prev;
			if ((*current)->prev)
			{
				(*current)->prev->next = node;
			}
		}
		node->next = *current;
		if (*current)
		{
			(*current)->prev = node;
		}
		*current = node;
	}
	*list = sorted;
}
