#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees linked list and set the head to null
 * @head: is the pointer to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *var;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		var = current->next;
		free(current);
		current = var;
	}
	*head = NULL;
}
