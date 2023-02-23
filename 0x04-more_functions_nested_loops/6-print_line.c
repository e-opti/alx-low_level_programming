#include "main.h"

/**
 *print_line - draw a line
 *@n: num of times
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
