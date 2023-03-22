#include "main.h"

/**
 * print_sign - the sign of a number.
 * @n: the character to be checked
 *
 * Return: 1 if n is positive, 0 if it's zero and -1 if it's negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

