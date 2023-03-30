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
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		src_len++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

