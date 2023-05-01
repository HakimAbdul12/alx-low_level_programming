#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees all the members of the linked list
 * @head: is the pointer to the head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *var;

	while (head != NULL)
	{
		var = head;

		head = head->next;
		free(var);
	}
}
