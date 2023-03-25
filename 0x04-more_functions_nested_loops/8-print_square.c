#include "main.h"
/**
 * print_square - the function
 * @size: input
 * Return: void
 */
void print_square(int size)
{
	int i, k;

	for (i = 0 ; i < size ; i++)
	{
		for (k = 0 ; k <= size ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
