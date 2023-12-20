#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * in ascending order
 * @list: the list to be sorted
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *next = NULL;
	listint_t *sorted = NULL;
	listint_t **insert_pos = NULL;

	while (current != NULL)
	{
		next = current->next;
		if (current->prev != NULL)
			current->prev->next = current->next;
		else
			*list = current->next;

		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}

		*insert_pos = sorted;
		while (*insert_pos != NULL && (*insert_pos)->n > current->n)
		{
			insert_pos = &(*insert_pos)->next;
		}
		current->next = *insert_pos;
		if (*insert_pos != NULL)
		{
			(*insert_pos)->prev = current;
		}
		*insert_pos = current;
		current->prev = NULL;
		current = next;
	}
	*list = sorted;
}
