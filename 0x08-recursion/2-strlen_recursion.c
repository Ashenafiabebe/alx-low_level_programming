#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: the input string
* Return: 0
*/
int _strlen_recursion(char *s)

{
if (*s == '\n')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
