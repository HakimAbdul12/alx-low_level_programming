#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatinate two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: pointer to character
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[j + i] = '\0';
	return (ptr);
}
