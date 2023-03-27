#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * @s: is the input character
 * Return:  Always k for success
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
