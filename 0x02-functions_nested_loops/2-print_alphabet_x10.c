#include "main.h"

/**
 *print_alphabet_x10 - lowercase alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	char alp;

	alp = 1;

	for (alp = 1; alp <= 10; alp++)
	{

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
	}
	_putchar('\n');
}
