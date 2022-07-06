#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Return: always 1
 */
void print_alphabet_x10(void)
{
	int number;

	for (number = 0; number <= 10; number++)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');

	return (1);
}
