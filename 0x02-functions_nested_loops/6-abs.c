#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * Return: an integer
 */
int _abs(int k)
{
	if (k == 0)
	{
		_putchar(k +'0');
	}
	else if (k > 0)
	{
		_putchar(k + '0');
	}
	else if (k < 0)
	{
		_putchar(k +'0');
	}
	return (0);
}
