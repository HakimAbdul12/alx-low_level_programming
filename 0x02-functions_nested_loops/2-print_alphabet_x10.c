#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 1 on success
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
