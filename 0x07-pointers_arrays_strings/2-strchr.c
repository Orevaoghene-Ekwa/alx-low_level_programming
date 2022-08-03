#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: pointer to a char
 * @c: a char
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; c > 0; i++)
	{
		if (i == c)
		{
			s = &c;
			return (s);
		}
		else if (i != c)
		{
			return (s + 1);
		}
	}
	return (s + 1);
}
