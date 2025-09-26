#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Executes a basic arithmetic operation and displays the result.
 * @argc: Total number of arguments passed to the program.
 * @argv: Array containing the actual arguments as strings.
 *
 * Return: 0 if the program runs successfully.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *Op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	Op = argv[2];

	if (get_op_func(Op) == NULL || Op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((Op[0] == '/' || Op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(Op)(num1, num2));

	return (0);
}

