#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: is the name
 * @f: is the pointer to the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);
	f(name);
}
