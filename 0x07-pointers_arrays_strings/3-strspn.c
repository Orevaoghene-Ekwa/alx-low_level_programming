#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a char
 * @accept: pointer to a char
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}

		if (*(accept + i) == '\0')
			break;
	}
	return (j);
}
