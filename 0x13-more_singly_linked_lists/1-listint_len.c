#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints length of  listint_t list
 * @h: pointer to structure
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
