#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *  dlistint_len - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */

size_t  dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}

	return (count);
}
