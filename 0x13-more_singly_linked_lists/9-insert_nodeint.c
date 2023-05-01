#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new list at a given position
 * @head: is a double pointer to the head node
 * @idx: is the index at which new node should be inserted
 * @n: is the data to be inserted in the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (; temp && count < idx; count ++)
	{
		if (count == idx -1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
