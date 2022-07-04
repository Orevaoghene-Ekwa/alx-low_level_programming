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
	char alphabets;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
