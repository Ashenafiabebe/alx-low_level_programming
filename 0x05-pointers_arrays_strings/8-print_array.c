#include "main.h"
#include <stdio.h>

/**
* print_array - will prints a string in reverse
* @a: The number of arrays
* @n: Number of elemnts
* Return: void
*/

void print_array(int *a, int n)

{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
