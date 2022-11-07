#include "lists.h"

/**
 * get_nodeint_at_index -gets the nth node of a linked list
 * @head: pointer to the list
 * @index: index of the node, starting at 0
 * Return: nth node or NULL if node doent exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
