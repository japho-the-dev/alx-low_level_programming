#include "lists.h"
/**
 * add_node - Insert a new node to the list
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to capture in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t i;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	n_node->len = i;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}
