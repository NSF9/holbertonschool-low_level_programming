#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to head of the list
 * @idx: Index at which to insert the new node (starting from 0)
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if insertion fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (tmp && i < idx - 1)
	{
	tmp = tmp->next;
	i++;
	}

	if (!tmp)
	return (NULL);

	if (tmp->next == NULL)
	return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
