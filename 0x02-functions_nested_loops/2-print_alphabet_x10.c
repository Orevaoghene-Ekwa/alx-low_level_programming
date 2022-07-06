#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int number;
	char alphabet;

	number = 0;
	while (number < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		number++
	}
	_putchar('\n');

	return (0);
}
