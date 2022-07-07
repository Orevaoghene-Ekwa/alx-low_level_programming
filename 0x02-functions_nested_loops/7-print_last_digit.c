#include "main.h"

/**
 * print_last_digit - prints the last digit of an input
 * @nld: number's last digit result
 *
 * Return: last digit of number
 */
int print_last_digit(int nld)

{
	int pld;

	pld = (nld % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);

}
