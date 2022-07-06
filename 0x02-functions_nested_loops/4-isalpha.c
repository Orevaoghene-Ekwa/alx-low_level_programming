#include "main.h"

/**
 * _isalpha - checks if c is an alphabet
 * @c: to be checked
 *
 * Return: 1 if alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'z')))
		return (1);
	else
		return (0);
}
