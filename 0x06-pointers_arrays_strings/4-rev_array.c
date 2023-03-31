#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: is the array
 * @n: is the lenght of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	int b;

	for ( i = 0; i < n/2; i++)
	{
		b = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = b;
	}
}
