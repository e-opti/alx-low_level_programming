#include <stdio.h>

/**
 *main - lowercase alphabet in reverse
 *
 *Return: 0
 */
int main(void)
{
	char loal;

	for (loal = 'z'; loal >= 'a'; loal--)
		putchar(loal);
	putchar('\n');

	return (0);
}
