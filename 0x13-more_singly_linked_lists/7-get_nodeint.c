#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: is the pointer to the head pointer
 * @index: is the index to the node
 * Return: the pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (index == count)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
