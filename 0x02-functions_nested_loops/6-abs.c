#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * Return: an integer
 * @k: the input value
 */
int _abs(int k)
{
	if (k == 0)
	{
		_putchar(k);
	}
	else if (k > 0)
	{
		_putchar(k);
	}
	else if (k < 0)
	{
		_putchar(k);
	}
	return (0);
}
