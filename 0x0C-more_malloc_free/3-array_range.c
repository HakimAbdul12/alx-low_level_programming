#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - set a memory for integers
 * @min: is the minimum number
 * @max: is the maximum number
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int k;

	if (min > max)
	return (0);

	k = max - min + 1;

	ptr = malloc((k) * sizeof(int));
	if (ptr == NULL)
		return (0);

	i = 0;
	while (i < (k))
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
