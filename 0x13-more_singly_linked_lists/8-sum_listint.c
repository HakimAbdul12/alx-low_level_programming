#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - return the sum of all the (n) data of a linked list
 * @head: is the pointer to the head node
 * Return: the sum of all the n data or NULL if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
