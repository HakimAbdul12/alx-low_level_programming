#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: is the first string
 * @ss2: is the second string
 * Return: pointer to character
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int t;
	int size1;
	int size2;
	char *ptr;
	int k;
	int l;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	i = 0;
	size1 = 0;

	while (s1[i] != '\0')
	{
		i++;
		size1++;
	}
	j = 0;
	size2 = 0;
	while (s2[j] != '\0')
	{
		j++;
		size2++;
	}
	t = size1 + size2;
	ptr = malloc(t + 1);
	if (ptr == NULL)
	{
		return (0);
	}
	k = 0;
	while (k < size1)
	{
		ptr[k] = s1[k];
			k++;
	}
	l = 1;
	while (l <= size2)
	{
		ptr[k + l] = s2[l-1];
		l++;
	}
	ptr[t] = '\0';
	return (ptr);
}
