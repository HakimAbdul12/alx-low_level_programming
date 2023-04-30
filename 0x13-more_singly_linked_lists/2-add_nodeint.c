#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: is the pointer to the head node
 * @n: is the integer value to be stored in the new node
 * Return: the memory address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
