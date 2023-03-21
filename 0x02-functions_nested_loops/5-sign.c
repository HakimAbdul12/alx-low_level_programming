#include <unistd.h>
#include "main.h"
/**
 * print_sign - Entry point
 * Return: Always 0 success
 * @n: Number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (3);
}
