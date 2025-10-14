#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = tmp->next;
	if (tmp->next != NULL)
	tmp->next->prev = NULL;
	free(tmp);
	return (1);
	}

	while (tmp != NULL && i < index)
	{
	tmp = tmp->next;
	i++;
	}

	if (tmp == NULL)
	return (-1);

	if (tmp->next != NULL)
	tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
	tmp->prev->next = tmp->next;

	free(tmp);
	return (1);
}
