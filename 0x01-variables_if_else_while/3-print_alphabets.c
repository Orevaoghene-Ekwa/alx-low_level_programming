#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabets in lowercase and uppercase, prints a new line
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putcahr(alphabet);
	}

	putchar('\n');

	return (0);
}
