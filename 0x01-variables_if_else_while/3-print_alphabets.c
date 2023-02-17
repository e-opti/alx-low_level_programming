#include <stdio.h>

/**
 *main - lower and upper
 *
 *Return: 0
 */
int main(void)
{
	char lo;
	char up;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		putchar(lo);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');

	return (0);
}
