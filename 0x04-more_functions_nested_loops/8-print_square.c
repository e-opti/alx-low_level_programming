#include "main.h"

/**
 *print_square - draw a square
 *@size: size of square
 */
void print_square(int size)
{
	int a;

	for (a = 0; a < size; a++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
