#include "main.h"
/**
 * *_strcat - concatinate one string to another
 * @dest: the destination
 * @src: is the source string
 * Return: character varaible
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	int src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	int k;

	for (k = 0; k < src_len; k++)
	{
		dest[dest_len + k] = src[k];
	}
	dest[dest_len] = '\0';
	_putchar('\n');
	return (dest);
}
