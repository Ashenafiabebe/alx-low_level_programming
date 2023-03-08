#include "main.h"

/**
* _puts_recursion - will print string followed by a new line
* @s: the input string
* Return: None
*/
void _puts_recursion(char *s)
{
if (*s == '\n')
{
_putchar('\n');
return;
}

_putchar(*s);
s++;
_puts_recursion(s);
}
