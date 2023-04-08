#include <stdio.h>
/**
 * main - is the entry point
 * @argc: is the counter
 * @argv: is the pointer
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
