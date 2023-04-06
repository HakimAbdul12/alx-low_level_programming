#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: is the number whose factorial is to be found
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
