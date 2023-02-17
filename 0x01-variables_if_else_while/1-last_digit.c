#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - last digit
 *
 *Return: 0
 */
int main(void)
{
	int n, lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lsd = n %  10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lsd);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsd);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
	}
	return (0);
}
