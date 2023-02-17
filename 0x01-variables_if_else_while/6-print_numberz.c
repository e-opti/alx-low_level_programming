#include <stdio.h>

/**
 *main - single digits using putchar
 *
 *Return: 0
 */
int main(void)
{
	char dg;

	for (dg = '0'; dg <= '9'; dg++)
	{
		putchar(dg);
	}
	putchar('\n');

	return (0);
}
