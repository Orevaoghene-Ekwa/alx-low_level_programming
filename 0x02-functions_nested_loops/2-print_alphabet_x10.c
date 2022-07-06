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
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');

	return (0);
}
