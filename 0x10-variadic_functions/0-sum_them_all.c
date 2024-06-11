#include "variadic_funtions.h"

/**
 * sum_them_all - sums all its arguments
 * @n: first argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(args, const unsigned int)
	}
	va_end(args);

	return (sum);
}