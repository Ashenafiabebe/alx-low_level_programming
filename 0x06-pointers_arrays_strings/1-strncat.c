#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenates 2 strings at most
* @dest: The string to be appended upon
* @src: The string to be appended to dest
* @n: The number of bytes form src to be appended to dest
* Return: Pointer to the final string destination
*/

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
{
	dest_len++;
}
for (index = 0; src[index] && index < n; index++)
{
	dest[dest_len++] = src[index];
}
return (dest);
}
