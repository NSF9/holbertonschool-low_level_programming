#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len = 0;

	if (!head || !str)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	while (str[len])
		len++;

	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}


