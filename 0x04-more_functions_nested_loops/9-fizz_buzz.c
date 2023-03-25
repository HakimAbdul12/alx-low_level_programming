#include <stdio.h>
/**
 * main - Entry
 * @i: input
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if ( i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
	}
	printf("\n");
}
