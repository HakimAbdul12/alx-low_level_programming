#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Entry
 * Return: Always important
 * @k: The intake
 * @last: an input
 */
int print_last_digit(int k)
{
	int last = k % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
