#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints the elements in a linked list
 * @h: is the pointer to the head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n",h->n);
		count++;
		h = h->next;
	}
	return (count);
}
