#include "lists.h"
/**
 * list_len - returns the no of components in a list.
 * @h: singly linked list.
 * Return: number of components in the list.
 */

size_t list_len(const list_t *h)
{
	size_t Component_n;

	Component_n = 0;
	while (h != NULL)
	{
		h = h->next;
		Component_n++;
	}
	return (Component_n);
}

