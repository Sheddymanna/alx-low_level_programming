#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @i: function parameter
 *
 * Return: k
 */
int print_last_digit(int i)
{
	int k;

	if (i < 0)
	{
		i = -i;
	}
	k = i % 10;
	if (i < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}

