#include "main.h"

/**
 * _islower - this function checks for lower case
 * @c: the charactor to be checked
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
