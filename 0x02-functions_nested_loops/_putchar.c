#include "main.h"
#include <unistd.h>

/**
 * main - pritnting _putchar in c
 * Return: 0
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}

