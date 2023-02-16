#include <stdio.h>
/**
 *main - error quote
 *
 *Return: 1
 */

int main(void)
{
char fls[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(fls, sizeof(fls) - 1, 1, stderr);
return (1);
}
