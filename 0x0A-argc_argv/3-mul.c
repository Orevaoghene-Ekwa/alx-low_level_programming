#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: On success, 0. Else, 1.
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d", mul);
	}
	else
	{
		print("Error\n");

	}
	return (0);`
}
