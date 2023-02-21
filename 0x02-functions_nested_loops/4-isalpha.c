#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @a: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercas otherwise 0
 */

int _isalpha(int a)

{
if ((a >= 65 && a <= 98) || (a >= 97 && a <= 122))
{
return (1);
}
return (0);
}
