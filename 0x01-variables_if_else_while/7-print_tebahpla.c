#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in reverse
 *
 * Return: always 0
 */
int main(void)
{
	alphabet char;

	for (alphabet = 'z'; alphabet = 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
