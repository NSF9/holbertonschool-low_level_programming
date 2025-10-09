#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int len = 0;

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
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}

	return (node);
}

