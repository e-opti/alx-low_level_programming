#include "main.h"

/**
 *times_table - 9 times
 *
 */
void times_table(void)
{
	int sh, lg, mul;

	for (sh = 0; sh < 10; sh++)
	{
		_putchar(0);
		for (lg = 0; lg < 10; lg++)
		{
			mul = sh * lg;
			{
				_putchar(',');
				_putchar(' ');
				if (mul < 10)
				{
					_putchar(' ');
					_putchar(mul + '0');
				}
				else
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
