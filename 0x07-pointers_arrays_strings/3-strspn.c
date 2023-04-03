#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: is the main string
 * @accept: is the substring
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int len = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (len);
			}
		}
	}
	return (len);
}
