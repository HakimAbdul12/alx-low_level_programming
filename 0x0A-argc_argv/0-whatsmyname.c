#include <stdio.h>
#include "main.h"
/**
 * main - is the entry point
 * @argc: is the count for the command line inputs
 * @argv: is the pointer to the strings
 * Return: always (0) success
 */
int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
