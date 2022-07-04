#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
