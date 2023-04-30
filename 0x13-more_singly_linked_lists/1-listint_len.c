#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - return the number of elements in a list
 * @h: is the pointer to the head node
 * Return: number od elements or nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
