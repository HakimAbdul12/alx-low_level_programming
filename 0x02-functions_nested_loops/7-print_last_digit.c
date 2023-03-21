#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Entry
 * Return: Always important
 * @k: The intake
 */
int print_last_digit(int k)
{
	k = k % 10;
	if (k < 0)
	{
		k  = -k;
	}
	_putchar(k + '0');
	return (k);
}
