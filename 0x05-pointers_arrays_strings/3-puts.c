#include "main.h"

/**
* _puts - will prints a string
* @str: The strings to get the length
* Return: void
*/

void _puts(char *str)

{
	
	for (; *str != '\n'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
