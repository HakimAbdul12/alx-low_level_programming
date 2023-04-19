#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - is a function that execute a function on an array
 * @array: is the pointer to the array
 * @size: is the size of the array
 * @action: is the pointer to the function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
