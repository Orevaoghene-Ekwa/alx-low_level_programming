#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of current file
 * Return: void
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
