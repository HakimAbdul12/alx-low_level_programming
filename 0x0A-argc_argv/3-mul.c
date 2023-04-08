#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the entry point
 * @argc: is the argument count
 * @argv: is the pointer to the strings
 * Return: always (0) success
 */
int main(int argc, char *argv[])
{
	if (argc - 1 == 2)
	{
		int i = atoi(argv[1]);

		int j = atoi(argv[2]);

		int z = i * j;

		printf("%d\n", z);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
