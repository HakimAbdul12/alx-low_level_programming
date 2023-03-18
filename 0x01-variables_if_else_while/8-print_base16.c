#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		putchar('0' + j);
	}
	for (j = 0 ; j < 6 ; j++)
	{
		putchar('a' + j);
	}
	putchar('\n');
	return (0);
}
