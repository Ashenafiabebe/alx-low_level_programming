#include "main.h"

/**
* _puts_recursion - will print string followed by a new line
* @s: the input string
* Return: None
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
