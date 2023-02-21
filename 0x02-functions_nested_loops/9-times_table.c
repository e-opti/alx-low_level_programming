#include "main.h"

/**
 *times_table - 9 times
 *
 */
void times_table(void)
{
	int sh, lg, mul;

	for (sh = 0; sh <= 9; sh++)
	{
		_putchar('0');

		for (lg = 1; lg <= 9; lg++)
		{
			_putchar(',');
			_putchar(' ');

			mul = sh * lg;

			if (mul <= 9)
				_putchar(' ');
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
