#include "main.h"
#include <stdlib.h>
/**
 * *create_array - is a function that allocate memory for a character
 * @size: is the size of memory to be allocated
 * @c: is the character to fill the allocated space
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		{
			return (0);
		}

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return(0);
	}
	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return(ptr);
}
