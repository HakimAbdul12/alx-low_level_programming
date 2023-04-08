#include <stdio.h>
#include <stdlib.h>
/**
 * add_all - is a function that add all the numbers
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: always (0) success
 */
int add_all(int argc, char *argv[])
{
	int i;

	int j;

	int sum = 0;

	char *y;

	for (i = 1; i < argc; i++)
	{
		y = argv[i];

		for (j = 0; y[j] != '\0'; j++)
		{
			if (y[j] < '0' || y[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			int num = atoi(&y[j]);

			if (num > 0)
			{
				sum += num;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * main - is the entry point
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: always (0) success
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		return (add_all(argc, argv));
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
