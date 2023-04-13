#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - locates memory
 * @b: is the number of bytes to be allocated
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
