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
	list_t *new_node;
	list_t *tmp;

	tmp = *head;
	if (!str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	tmp->next = new_node;
	}
	return (new_node);
}
