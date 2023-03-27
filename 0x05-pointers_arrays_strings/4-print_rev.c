#include "main.h"
/**
 * print_rev - print out in reverse order
 * @s: is the input
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--
