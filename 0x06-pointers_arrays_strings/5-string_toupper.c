#include "main.h"
/**
 * *string_toupper - changes all lowercase to upper
 * @n: is the character
 * Return: a character
 */
char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i]-32;
			i++;
		}
	}
	return (n);
}
