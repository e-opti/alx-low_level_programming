#include "main.h"

/**
 *jack_bauer - minute
 *
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		_putchar('0' + (hr / 10));
		_putchar('0' + (hr % 10));
	}
	_putchar('\n');

	for (min = 0; min < 60; min++)
	{
		_putchar('0' + (min / 10));
		_putchar('0' + (min % 10));
	}
	_putchar('\n');
}
