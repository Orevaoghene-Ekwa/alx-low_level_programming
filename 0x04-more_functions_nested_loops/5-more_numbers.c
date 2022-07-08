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
	while (1 <= 9)
	{
		i++;
		for (n = 0; n <= 14; n++)
		{
			if (i <= 10)
				_putchar(n);
			_putchar('\n');
		}
	}
}
