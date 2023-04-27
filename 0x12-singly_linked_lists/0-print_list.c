#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints all the members of nodes
 * @h: is the pointer to the head pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
		else
		printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
