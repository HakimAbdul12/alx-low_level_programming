#include <unistd.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: Always 0 (success)
 * @c: The character to check
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
