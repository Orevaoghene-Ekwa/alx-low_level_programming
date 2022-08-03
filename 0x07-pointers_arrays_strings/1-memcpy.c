#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: char pointer
 * @dest: char pointer
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n -= 1;
	}
	return (dest);
}
