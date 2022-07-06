#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @ab: input integer
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
