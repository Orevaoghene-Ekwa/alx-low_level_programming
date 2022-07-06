#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int number;

	number = 0;
	for (number = 0; number <= 10; number++)
	{
		print_alphabet_x10(print_alphabet);
	}
	print_alphabet_x10('\n');

	return (0);
}
