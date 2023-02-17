#include <stdio.h>
/**
 *main - except q and e
 *
 *Return: 0
 */
int main(void)
{
	char apb;

	for (apb = 'a'; apb <= 'z'; apb++)
	{
		if (apb != 'q' && apb != 'e')
			putchar(apb);
		}
	putchar('\n');

	return (0);
}
