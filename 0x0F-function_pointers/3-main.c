#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - is the entry point
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int k;
	int y;
	int z;
	char *s;
	int (*ptr)(int, int);
	char oper;

	if (argc != 4 || argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		oper = argv[2][0];
		if (oper != '+' && oper != '*' && oper != '/' && oper != '-' && oper != '%')
		{
			printf("Error\n");
			exit(99);
		}
		if ((oper == '/' || oper == '%') && atoi(argv[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}
		y = atoi(argv[1]);
		z = atoi(argv[3]);
		s = argv[2];

		ptr = get_op_func(s);

		k = ptr(y, z);
		printf("%d\n", k);
		return (0);
	}
}
