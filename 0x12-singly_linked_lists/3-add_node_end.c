#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 *  @str: string to be searched
 *  Return: length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - add a node at the end of list
 * @head: double pointer to the head of a linked list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new, *ptr;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		while (*(str + len))
			len++;
		new->str = strdup(str);
		if (new->str)
		{
			new->len = len;
			new->next = NULL;
			if (!*head)
			{
				*head = new;
				return (new);
			}
			ptr = *head;
			while (ptr->next)
				ptr = ptr->next;
			ptr->next = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	return (NULL);
}
