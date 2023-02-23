#include "main.h"

/**
 *more_numbers - 0 - 14, 10x
 */
void more_numbers(void)
{
	int d, c;

	for (c = '0'; c <= '14'; c++)
	{
		for (d = 1; d <= 10; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
