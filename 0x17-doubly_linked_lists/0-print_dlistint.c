#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		printf("%s", "Empty lisit");
	}
	while (h != NULL)
	{
		int new_node = h->n;

		printf("%d\n", new_node);
		h = h->next;
		counter++;
	}
	return (counter);
}
