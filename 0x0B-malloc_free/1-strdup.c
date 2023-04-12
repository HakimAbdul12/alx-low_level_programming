#include "main.h"
#include <stdlib.h>
/**
 * _strdup - is a function that duplicates a string
 * @str: is the pointer to the characters to be duplicated
 * Return: the pointer to the new copied string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int k;
	int size;

	if (str == NULL)
		return (0);

	k = 0;
	size = 0;

	while (str[k] != '\0')
	{
		k++;
		size++;
	}
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (0);

	i = 0;
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[size] = '\0';
	return (ptr);
}
