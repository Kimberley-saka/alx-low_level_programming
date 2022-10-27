#include "lists.h"
#include <stdlib.h>

/**
 * free_list - destroy list
 * @head: list header
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *acc = NULL;

	while (head)
	{
		acc = head;
		head = head->next;
		free(acc->str);
		free(acc);
	}
}
