#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @n: function parameter
 *
 * Return: always 0
 */
int print_last_digit(int n)
{
	int a;
	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

