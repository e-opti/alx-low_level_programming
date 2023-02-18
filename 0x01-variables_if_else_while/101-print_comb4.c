#include <stdio.h>

/**
 *main - triple combination
 *
 *Return: 0
 */
int main(void)
{
	int tens;
	int ones;
	int twos;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			for (twos = ones + 1; twos <= 9; twos++)
			{
				putchar(tens + '0');
				putchar(ones + '0');
				putchar(twos + '0');

				if (tens < 7 && ones < 8 && twos < 9)
				{
					putchar(',');
					putchar(' ');
				}

			}

		}

	}
	putchar('\n');

	return (0);
}
