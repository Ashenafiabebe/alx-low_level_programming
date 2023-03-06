#include "main.h"

/**
* _memset - get inputs
* @s: will point the destination
* @b: constant bytes
* @n: bytes
* Return: 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
