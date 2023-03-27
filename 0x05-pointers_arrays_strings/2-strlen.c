#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * @s: is the input character
 * Return  Always 0 for success
 */
int _strlen(char *s)
{
	int k = 0;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	return (k);
}
