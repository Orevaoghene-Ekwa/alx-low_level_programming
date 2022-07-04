#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints out the alphabets except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' alphabet++)
	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;
		putchar(alphabet);
	}

	putchar ('\n');

	return (0);
}
