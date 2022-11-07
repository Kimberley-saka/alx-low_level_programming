#include "lists.h"

/**
 * free_listint2 - function with one argument
 * @head: pointer to head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
