#include "main.h"
#include <stdio.h>
/**
 * print_array - does something
 * @a: pointer
 * @n: input
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 1;

	while (i <= n)
	{
		printf("%d", *(a)++);
		if (i != n)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

