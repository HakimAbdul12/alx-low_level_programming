#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: is the pointer to the head node
 * @n: is the integer value to be stored in the new node
 * Return: the address od the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
