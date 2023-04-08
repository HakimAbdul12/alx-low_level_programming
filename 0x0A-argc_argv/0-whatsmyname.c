#include <stdio.h>
#include "main.h"
/**
 * main - is the entry point
 * @argc: is the count for the command line inputs
 * @argv: is the pointer to the strings
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char *program_name = argv[0];

	while (program_name[i] != '\0')
	{
		_putchar(program_name[i]);
		program_name++;
	}
	_putchar('\n');
	return (0);
}
