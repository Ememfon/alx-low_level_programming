#include "main.h"

/**
 * _isalpha - this function checks if c is an alphabet
 * @c: this is the character to be checked
 * Return: 1 is returded if c is an alphabet else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
