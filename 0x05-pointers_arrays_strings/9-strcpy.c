#include "main.h"

/**
* _strcpy - will prints a string in reverse
* @dest: destination value
* @src: source value
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)

{
int i;

for (i = 0; src[i] != '\n'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}