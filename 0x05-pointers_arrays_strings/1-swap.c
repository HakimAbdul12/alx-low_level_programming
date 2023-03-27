#include "main.h"
/**
 * swap_int - this funtion swaps the value of two integers
 * @a: input
 * @b: input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
