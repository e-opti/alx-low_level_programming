#include <stdio.h>

/**
 *main - combination
 *
 *Return: 0
 */
int main(void)
{
	int dg;

	for (dg = '0'; dg <= '9'; dg++)
	{
		putchar(dg);
		if (dg < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
