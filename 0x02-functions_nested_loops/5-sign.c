#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @k: a character that will check the numebr sign
 * Return: 1 if posetive, 0 if zero or  -1 if negative
 */

int print_sign(int k)

{

	if (k > 0)
{
	_putchar(43);
return (1);
}
	else if (k < 0)
{
	_putchar(45);
return (-1);
}
	else
{
	_putchar(48);
return (0);
}
}
