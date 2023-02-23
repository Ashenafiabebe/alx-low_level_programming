#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: the numbe rof lines to be drawn
* Return: the numbers from 0 to 14
*/

void print_line(int n)
{

int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
