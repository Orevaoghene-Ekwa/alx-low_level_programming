#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all single digit numbers in base ten
 *
 * Return: always 0
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}

	putchar('\n');

	return (0);
}
