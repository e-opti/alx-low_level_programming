#include "main.h"

/**
 *_islower - is lowercase
 *
 *@c: check the letter
 *
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
