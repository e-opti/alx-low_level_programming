#include "main.h"

/**
 * _isdigt - is a digit
 *
 * @c: character
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
