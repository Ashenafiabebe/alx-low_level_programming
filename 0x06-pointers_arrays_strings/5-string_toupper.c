#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes all lower case letter
* @str: The string to be changed
* Return: A pointer to the chnaged string
*/

char *string_toupper(char *str)

{
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}