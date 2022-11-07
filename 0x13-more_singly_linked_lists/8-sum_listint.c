#include "lists.h"

/**
 * sum_listint - calculates the sum of elements in a linked list
 * @head: pointer to the list
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
