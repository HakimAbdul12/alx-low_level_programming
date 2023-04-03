#include "main.h"
/**
 * _memcpy - copy n bytes
 * @dest: is the destination to paste the cpoied bytes
 * @src: is the source
 * @n: is the number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
