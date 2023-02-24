#include "main.h"

/**
 *print_square - draw a square
 *@size: size of square
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a <= size; a++)
	{
		for (b = 0; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
