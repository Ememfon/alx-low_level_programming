#include "main.h"

/**
 * print_last_digit - this function prints last digit of a number
 * @n: this is the number to be printed
 * Return: value of last digit is returned
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	{
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
