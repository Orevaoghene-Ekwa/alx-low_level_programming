#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 *
 * @argc: number of arguments entered at the command line
 * @argv: an array of all the command line arguments
 *
 * Return: On success, 0
 */

int main(int argc, char __attribute__((unused)) argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
