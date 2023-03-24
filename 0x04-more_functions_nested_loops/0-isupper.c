#include "main.h"
/**
 * _isupper - Entry point
 * Return: Always 0 success
 * @c: The input
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
