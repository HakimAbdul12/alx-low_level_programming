#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - is a function selector according to the character supplied to it's argument
 * @s: is the pointer to the character
 * Return: to any function that takes two integers
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
