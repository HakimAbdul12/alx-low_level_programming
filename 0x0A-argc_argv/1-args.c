#include <stdio.h>

/**
 * main - is the entry point
 * @argc: number og arguments
 * @argv: is the pointer to the arguments
 * Return: Always (0) success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
