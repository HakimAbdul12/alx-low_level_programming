#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - return the number of nodes or the elements in a linked list
 * @h: is the pointer to the head
 * Return: the number in size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
