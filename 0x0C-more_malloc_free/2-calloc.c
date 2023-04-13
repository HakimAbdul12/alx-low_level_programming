#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for the array
 * @nmemb: is the number of elements in the array
 * @size: is the size of the elements
 * Return: none;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
