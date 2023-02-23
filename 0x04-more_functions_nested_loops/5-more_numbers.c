#include "main.h"

/**
 *more_numbers - 0 - 14, 10x
 */
void more_numbers(void)
{
	int c, d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
