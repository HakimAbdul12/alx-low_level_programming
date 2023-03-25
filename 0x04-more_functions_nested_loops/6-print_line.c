#include "main.h"
/**
 * print_line - entry point
 * @n: input
 * Return: void
 */
void print_line(int n)
{
	int i;
	for (i = 0 ; i < n ; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
