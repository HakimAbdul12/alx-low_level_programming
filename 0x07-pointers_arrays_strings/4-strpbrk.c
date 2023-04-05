#include "main.h"
/**
 * _strpbrk - searches for matching characters
 * @s: is the pointer to the string under search
 * @accept: is the pointer to the string of characters to be searched
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
