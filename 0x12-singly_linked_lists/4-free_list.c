#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *n_node;

	while ((n_node = head) != NULL)
	{
		head = head->next;
		free(n_node->str);
		free(n_node);
	}
}
