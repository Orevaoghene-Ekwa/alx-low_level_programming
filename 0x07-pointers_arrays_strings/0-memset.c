#include "main.h"

/**
 * _memset - memory set function
 * @s: string
 * @b: a character
 * @n: an integer
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n -= 1;
	}
	return (s);
}
