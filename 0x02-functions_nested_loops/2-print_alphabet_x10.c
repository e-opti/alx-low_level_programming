#include "main.h"

/**
 *print_alphabet_x10 - lowercase alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	char alp;

	k = 1;

	for (k = 1; k <= 10; k++)
	{

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
