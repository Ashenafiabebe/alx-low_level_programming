#include <stdio.h>
#include "main.h"

/**
* main - finds and prints the largest prime factor of the number 612852475143
* Return: 0
*/

int main(void)

{

long x, maxf;
long number = 612852475143;

for (x = 1; x < number; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}
printf("%ld\n", maxf);
return (0);
}
