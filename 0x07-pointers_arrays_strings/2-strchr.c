#include "main.h"
/**
 * _strchr - finds a character in a string
 * @s: is the pointer to the string
 * @c: is the character under search
 * Return: NULL or pointer tto the first occurance of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
