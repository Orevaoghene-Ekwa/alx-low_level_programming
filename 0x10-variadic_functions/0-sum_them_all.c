#include "variadic_funtions.h"

/**
 * sum_them_all - sums all its arguments
 * @n: first argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;
	
	va_start(args, n);

	while (i < n)
	{
		sum += va_args(args, int);
		i++;
	}
	va_end;
	return (sum);
}
