#include "main.h"

/**
 * print_line - print line
 * @n: the character to print
 * Return: void
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
