#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combination of single numbers
 *
 * Return: always 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');

		if (number == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
