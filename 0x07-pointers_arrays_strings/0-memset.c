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
	unsigned int a;

	for (a = o; a < n; a++)
		s[a] = b;
	return (s);
}
