#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a new node
 * @head: is the head pointer
 * @str: is the string to insert into the new node
 * Return: address of the new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	*head = new_node;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	return (*head);
}
