#include <unistd.h>
/**
 * print_alphabet - wrietes the characters 
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
}
