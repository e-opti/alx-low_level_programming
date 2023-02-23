#include "main.h"

/**
 *more_numbers - 0 - 14, 10x
 */
void more_numbers(void)
{
	int c, d;

	for (d = 1; d <= 10; d++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
