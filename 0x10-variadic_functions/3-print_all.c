#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *cat = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", cat, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", cat, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", cat, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", cat, str);
					break;
				default:
					i++;
					continue;
			}
			cat = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
