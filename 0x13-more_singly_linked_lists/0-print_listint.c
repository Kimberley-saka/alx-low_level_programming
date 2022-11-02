#include "lists.h"
#include <stdio.h>

/**
 * print_listint - rints all the elements of a listint_t list
 * @h: pointer to structure
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
