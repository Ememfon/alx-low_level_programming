#include "main.h"

/**
 * _abs - this function computes the absolute value of an integer
 * @x: this is the  integer computed
 * Return: Always return 0
 */

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (0);
	}
}
