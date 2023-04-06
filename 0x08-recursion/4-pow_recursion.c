#include "main.h"
/**
 * _pow_recursion - finds x to the power of y
 * @x: is the base number
 * @y: is the power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
