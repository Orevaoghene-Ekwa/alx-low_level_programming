#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 16 hexadecimal digits
 *
 * Return: always 0
 */
int main(void)
{
	int numbers;
	char alphabets;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');
}
