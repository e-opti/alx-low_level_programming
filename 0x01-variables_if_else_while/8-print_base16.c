#include <stdio.h>

/**
 *main - print hex 0-9, a-f
 *
 *Return: 0
 */
int main(void)
{
	int dg;

	for (dg = '0'; dg <= '9'; dg++)
	{
		putchar(dg);
	}
	for (dg = 'a'; dg <= 'f'; dg++)
	{
		putchar(dg);
	}
	putchar('\n');

	return (0);
}
