#include "main.h"

/**
 * more_numbers - print numbers ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}