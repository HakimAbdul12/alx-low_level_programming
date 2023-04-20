#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: is the pointer to the string to be printed btwen the numbers
 * @n: is the number of args to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n == 0)
		exit(1);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			if (i == (n - 1))
				printf("%d\n", va_arg(list, int));
			else
				printf("%d", va_arg(list, int));
		}
		else
		{
			if (i == (n - 1))
				printf("%d\n", va_arg(list, int));
			else
				printf("%d%s", va_arg(list, int), separator);
		}
	}
	va_end(list);
}
