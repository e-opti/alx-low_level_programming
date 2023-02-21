#include "main.h"

/**
 *_isalpha - is alphabet
 *
 *@c: check the letter
 *
 *Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
