#include <stdio.h>
/**
 * print_to_98 - entry
 * return: always important
 */
void print_to_98(int n)
{
	for ( int i = n ; i <= 98 ; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (n);
}
