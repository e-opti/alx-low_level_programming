#include "main.h"

/**
 *print_diagonal - draw a diagonal
 *@n: num of times
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
