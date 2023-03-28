#include "main.h"
/**
 * *_strcpy - copies onr file to another
 * @dest: is the buffer pointer
 * @src: is the original string
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src <= '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
