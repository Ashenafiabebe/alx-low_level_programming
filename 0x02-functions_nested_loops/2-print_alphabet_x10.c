#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: void
 */

/* printing ten time the alphabet of lower case*/
void print_alphabet_x10(void)

{
	char c;
	int n = 0;

while (n <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
n++;
}
}
