#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees linked list and set the head to null
 * @head: is the pointer to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *var;

	while (*head != NULL)
	{
		var = *head;
		*head = (*head)->next;
		free(var);
	}
	*head = NULL;
}
