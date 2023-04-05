#include "lists.h"
/**
 * print_list - prints all the components of a list_t list.
 * @h: singly linked list.
 * Return: no of components in the list.
 */

size_t print_list(const list_t *h)
{
	size_t sized;

	sized = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		sized++;
	}
	return (sized);
}
