#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_to_98 - this function prints all natural numbers
 * @n: this is the first natural number
 * Return: Nothing is returned
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)

			printf("%d, ", n--);
		printf("%d\n", n);

	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);

	}
}
