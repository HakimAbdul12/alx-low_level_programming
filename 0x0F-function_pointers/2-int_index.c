#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: is the pointer to the array
 * @size: is the size of the array
 * @cmp: is the pointer to the function to compare the values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;
	int y;

	if (array == NULL || cmp == NULL)
		exit(1);

	if (size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		y = cmp(array[k]);
		if (y != 0)
		{
			return (k);
		}
	}
	return (-1);
}
