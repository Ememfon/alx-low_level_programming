#include "main.h"

/**
 * print_sign - this function checks the sign of n
 * @n:this is the number whose sign would is printed
 * Return: 1 if positive, -1 if negative, otherwise 0
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
		_putchar('0')

			return (0);
	}

	else
	{
		_putchar('-');

		return (-1);
	}
}
