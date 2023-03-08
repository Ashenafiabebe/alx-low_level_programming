#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - returns 1 if a string is a palindrome
* @s: number to determine the sqrt
* Return: 1 if n is prime
*/

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - returns length
* @s: string
* Return: length
*/

int _strlen_recursion(char *s)
{
if (*s == '\n')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - char checker
* @s: string
* @i: iterator
* @len: length of string
* Return: length
*/

int check_pal(char *s, int i, int len)
{
if (*(s + 1) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
