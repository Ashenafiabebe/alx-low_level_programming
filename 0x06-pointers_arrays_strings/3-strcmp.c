#include "main.h"
#include <stdio.h>

/**
* _strcmp - copy the input number
* @s1: The string to be appended upon
* @s2: The string to be appended to dest
* Return: The pointer of the final strung
* If str1 == str2, 0
* If str1 > str2, the +ve difference of the first unmatched characters
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
